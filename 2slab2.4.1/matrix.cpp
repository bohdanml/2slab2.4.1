#include "matrix.h"
#include <cmath>
#include <string>

using namespace std;

Matrix::Matrix(int n, int value) : size(n) {
    data.resize(size, std::vector<int>(size, value));
}

Matrix::Matrix() : size(0) {}

Matrix::Matrix(const Matrix& other) : data(other.data), size(other.size) {}

int Matrix::getSize() const {
    return size;
}

int Matrix::getValue(int i, int j) const {
    return data[i][j];
}

void Matrix::setValue(int i, int j, int value) {
    data[i][j] = value;
}

Matrix Matrix::operator+(const Matrix& other) const {
    Matrix result(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            result.data[i][j] = data[i][j] + other.data[i][j];
        }
    }
    return result;
}

bool Matrix::operator==(const Matrix& other) const {
    return data == other.data;
}

int Matrix::norm() const {
    int min_val = data[0][0];
    int max_val = data[0][0];
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (data[i][j] < min_val)
                min_val = data[i][j];
            if (data[i][j] > max_val)
                max_val = data[i][j];
        }
    }
    return std::abs(max_val - min_val);
}

std::ostream& operator<<(std::ostream& os, const Matrix& matrix) {
    for (int i = 0; i < matrix.size; ++i) {
        for (int j = 0; j < matrix.size; ++j) {
            os << matrix.data[i][j] << " ";
        }
        os << std::endl;
    }
    return os;
}

std::istream& operator>>(std::istream& is, Matrix& matrix) {
    std::cout << "Enter matrix elements:" << std::endl;
    for (int i = 0; i < matrix.size; ++i) {
        for (int j = 0; j < matrix.size; ++j) {
            is >> matrix.data[i][j];
        }
    }
    return is;
}

Matrix::operator std::string() const {
    std::string result;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            result += std::to_string(data[i][j]) + " ";
        }
        result += "\n";
    }
    return result;
}

int& Matrix::operator()(int i, int j) {
    return data[i][j];
}

const int& Matrix::operator()(int i, int j) const {
    return data[i][j];
}
