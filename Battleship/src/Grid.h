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

struct vehichle {
    string name;
    int num;
    // TODO Implement this
    int width;
    int length;
};

const vehichle BIKES{"bike", 1, 1, 2};
const vehichle CARS{"car", 2, 1, 3};
const vehichle BUSES{"bus", 1, 2, 3};


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
    void setUpBoard(const vehichle);

private:
    int shots, hits;
    vector<vector<char> > shotsGrid;
    vector<Ship> ships;
    vector<Ship> sunk;
};


#endif //BATTLESHIP_GRID_H
