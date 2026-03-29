#ifndef ENUMS_H
#define ENUMS_H

// Enums for better type safety
enum Color {
    WHITE, BLACK
};

enum PieceType {
    KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN
};

enum GameStatus {
    WAITING, IN_PROGRESS, COMPLETED, ABORTED
};

#endif // ENUMS_H