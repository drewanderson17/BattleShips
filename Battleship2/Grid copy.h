//
// Created by Eric Leuty on 2020-10-14.
//

#ifndef BATTLESHIP_GRID_H
#define BATTLESHIP_GRID_H

#pragma once

#include "Ship.h"

#include <string>
#include <vector>

using namespace std;

const int MAX_GRID = 100;
const int MIN_GRID = 10;

class GridException {
public:
    GridException(const string&);
    string what() const;
private:
    string message;
};

class Grid {
public:
    Grid(int dimension);
    string printGrid() const;
    string printStats() const;
    void shoot(int row, int col);
    void addShip(const Ship&);
    void writeShip(const Ship&, char);
    bool checkBounds(int row, int col);
    bool checkWin() const;

private:
    int shots, hits;
    vector<vector<char>> shotsGrid;
    vector<Ship> ships;
    vector<Ship> sunk;
};


#endif //BATTLESHIP_GRID_H
