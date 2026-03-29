#ifndef POSITION_H
#define POSITION_H

class Position {
public:
    int x;  // Column (A-H)
    int y;  // Row (1-8)

    Position(int x, int y);
    void setPosition(int x, int y);
    // Other methods can be added later
};

#endif // POSITION_H
