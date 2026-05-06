#pragma once

#include "Task.h"
#include <vector>
#include <string>

class MatrixMultiplyTask : public Task {
public:
    MatrixMultiplyTask(
        const std::vector<std::vector<double>>& A,
        const std::vector<std::vector<double>>& B
    );

    void execute() override;
    std::string getName() const override;

    const std::vector<std::vector<double>>& getResult() const;

private:
    std::vector<std::vector<double>> matrixA;
    std::vector<std::vector<double>> matrixB;
    std::vector<std::vector<double>> result;
};