// Position.h

#ifndef POSITION_H
#define POSITION_H

#include <iostream>
#include <stdexcept>
#include <string>

class Position {
private:
    int row;
    int col;
public:
    // Constructor
    Position(int r, int c) : row(r), col(c) {
        validate();
    }

    // Getters
    int getRow() const { return row; }
    int getCol() const { return col; }

    // Validation
    void validate() {
        if (row < 0 || row > 7 || col < 0 || col > 7) {
            throw std::out_of_range("Position out of range");
        }
    }

    // Operator Overloads
    bool operator==(const Position& other) const {
        return (row == other.row && col == other.col);
    }

    bool operator!=(const Position& other) const {
        return !(*this == other);
    }

    // toString method
    std::string toString() const {
        return "Row: " + std::to_string(row) + ", Col: " + std::to_string(col);
    }

    // toChessNotation method
    std::string toChessNotation() const {
        char colChar = 'a' + col;
        int rowNumber = 8 - row;
        return std::string(1, colChar) + std::to_string(rowNumber);
    }
};

#endif // POSITION_H
