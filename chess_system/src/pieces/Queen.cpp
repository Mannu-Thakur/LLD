#include "../../headers/pieces/Queen.h"
#include "../../headers/Board.h"
#include <vector>
using namespace std;

Queen::Queen(Color color) : Piece(color, QUEEN) {}

vector<Position> Queen::getPossibleMoves(Position currentPos, Board* board) {
    vector<Position> moves;
    int directions[8][2] = {{-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1}, {1,-1}, {1,0}, {1,1}};
    
    for (int d = 0; d < 8; d++) {
        for (int i = 1; i < 8; i++) {
            Position newPos(currentPos.getRow() + directions[d][0]*i, currentPos.getCol() + directions[d][1]*i);
            if (!newPos.isValid()) break;

            if (board->isOccupiedBySameColor(newPos, this->color)) break;

            moves.push_back(newPos);
            if (board->isOccupied(newPos)) break;
        }
    }
    return moves;
}

string Queen::getSymbol() { 
    return "Q"; 
}