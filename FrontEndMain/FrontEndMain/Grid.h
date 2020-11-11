/* 
* Outline of functions used to interact with Grid object. :)
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

class GridException {
public:
    GridException(const string&);
    string what() const;
private:
    string message;
};

class Grid {
public:
    //Grid() makes a square character array with dimension and
    //stores the player's name
    Grid();
    Grid(int dimension, string name);
    // printGrid() displays hit and misses on opponent's board
    // showShips is only true when used for debugging purposes
    string printGrid(bool showShips=false) const;
    string printStats() const;
    void shoot(int row, int col);
    //addShip() adds a placed Ship object onto the grid
    void addShip(const Ship&);
    //updates the cells occupied by ship with char
    void writeShip(const Ship&, char);
    bool checkBounds(int row, int col);
    bool isWon() const;
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

// Input validation function, takes "coordinate" or "direction" as input
int checkInput(string inType);

#endif //BATTLESHIP_GRID_H
