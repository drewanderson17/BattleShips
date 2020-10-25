/* 
* Outline of functions used to interact with Grid object.
*/

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
    // TODO Implement ability to have width
    int width;
    int length;
};

const vehichle BIKES{"bike", 1, 1, 2};
const vehichle CARS{"car", 1, 1, 3};
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
    Grid(int dimension, string name);
    // printGrid() displays hit and misses on opponent's board
    // showShips is only true when used for debugging purposes
    string printGrid(bool showShips=false) const;
    string printStats() const;
    void shoot(int row, int col);
    void addShip(const Ship&);
    void writeShip(const Ship&, char);
    bool checkBounds(int row, int col);
    bool keepPlaying() const;
    // addVehichle() adds a singular vehichle on to the player's board
    void addVehichle(const vehichle);
    // setUpBoard() prompts user to place all their vehichles
    void setUpBoard();
    // attack() prompts the user to take a shot on their opponent's board
    void attack(string name);
    string getPlayerName() const;

private:
    int shots, hits;
    string playerName;
    vector<vector<char> > shotsGrid;
    vector<Ship> ships;
    vector<Ship> sunk;
};

// Non-member functions used in main game loop
string promptPlayerForName(int playerNum);
void displayEndOfGameStats(const Grid& grid1, const Grid& grid2);

#endif //BATTLESHIP_GRID_H
