#include "MatrixMultiplyTask.h"

#include <vector>
#include <string>
#include <stdexcept>
#include <cstddef>   // for size_t

MatrixMultiplyTask::MatrixMultiplyTask(
    const std::vector<std::vector<double>>& A,
    const std::vector<std::vector<double>>& B
    )
    : matrixA(A), matrixB(B)
{
    if (A.empty() || B.empty() || A[0].size() != B.size()) {
        throw std::invalid_argument("Invalid matrix dimensions");
    }

    result.resize(
        A.size(),
        std::vector<double>(B[0].size(), 0.0)
    );
}

void MatrixMultiplyTask::execute() {
    for (size_t i = 0; i < matrixA.size(); ++i) {
        for (size_t j = 0; j < matrixB[0].size(); ++j) {
            for (size_t k = 0; k < matrixB.size(); ++k) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

std::string MatrixMultiplyTask::getName() const {
    return "Matrix Multiply Task";
}

const std::vector<std::vector<double>>&
MatrixMultiplyTask::getResult() const {
    return result;
}