//
// Created by Eric Leuty on 2020-10-14.
//

#ifndef BATTLESHIP_SHIP_H
#define BATTLESHIP_SHIP_H

#pragma once

#include <string>
#include <vector>

using namespace std;

class ShipException {
public:
    ShipException(const string&);
    string what() const;
private:
    string message;
};

class Ship {
public:
    Ship(int length);
    Ship(int length, int row, int col, bool dir);
    void placeShip(int row, int col, bool dir);
    vector<vector<int>> getPos() const;
    int getHealth() const;
    bool hit(int row, int col); //the integer indicates how far the shot was from the head of the ship

private:
    //bool dir;   // stores the direction of the ship 0:columnwise(left), 1:rowwise(down)
    int length;
    vector<vector<int>> pos;//stores the (row, column, health) of each segment

};


#endif //BATTLESHIP_SHIP_H
