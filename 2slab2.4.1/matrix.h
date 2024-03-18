#pragma once

#define MATRIX_H

#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> data;
    int size;

public:
    Matrix(int n, int value = 0);
    Matrix();
    Matrix(const Matrix& other);

    int getSize() const;
    int getValue(int i, int j) const;
    void setValue(int i, int j, int value);

    Matrix operator+(const Matrix& other) const;
    bool operator==(const Matrix& other) const;
    int norm() const;

    friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix);
    friend std::istream& operator>>(std::istream& is, Matrix& matrix);
    operator std::string() const;

    int& operator()(int i, int j);
    const int& operator()(int i, int j) const;
};

