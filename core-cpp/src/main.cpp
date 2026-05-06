#include "MatrixMultiplyTask.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<double>> A = {
        {1, 2},
        {3, 4}
    };

    std::vector<std::vector<double>> B = {
        {5, 6},
        {7, 8}
    };

    MatrixMultiplyTask task(A, B);

    std::cout << "Running: " << task.getName() << std::endl;
    task.execute();

    const auto& result = task.getResult();

    std::cout << "Result matrix:" << std::endl;
    for (const auto& row : result) {
        for (double value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}