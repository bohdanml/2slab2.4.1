#include <iostream>
#include "matrix.h"

int main() {
    Matrix A(3, 1);
    std::cout << "Matrix A:" << std::endl;
    std::cout << A;

    std::cin >> A;
    std::cout << "Matrix A after input:" << std::endl;
    std::cout << A;

    Matrix B = A;
    std::cout << "Matrix B (copy of A):" << std::endl;
    std::cout << B;

    Matrix C = A + B;
    std::cout << "Matrix C (A + B):" << std::endl;
    std::cout << C;

    std::cout << "Are A and B equal? " << (A == B ? "Yes" : "No") << std::endl;
    std::cout << "Norm of matrix A: " << A.norm() << std::endl;

    std::string str_A = A;
    std::cout << "Matrix A as string:" << std::endl;
    std::cout << str_A;

    std::cout << "Element at position (1, 1) of matrix A: " << A(1, 1) << std::endl;

    return 0;
}
