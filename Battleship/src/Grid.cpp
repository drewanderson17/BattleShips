//
// Created by Eric Leuty on 2020-10-14.
//

#include "Grid.h"

#include <string>
#include <vector>

using namespace std;

GridException::GridException(const string& m) : message(m) {}
string GridException::what() const { return message; }

Grid::Grid(int gridSizeIn) {
    if (gridSizeIn < MIN_GRID || gridSizeIn > MAX_GRID)
        throw GridException("Grid dimensions must be less than " + to_string(MAX_GRID) + " or greater than " + to_string(MIN_GRID) + ".");
    shots = 0;
    hits = 0;

    vector<char> row (gridSizeIn, 'O');
    vector<vector<char>> grid (gridSizeIn, row);
    shotsGrid = grid;

    vector<Ship> temp1;
    ships = temp1;
    vector<Ship> temp2;
    sunk = temp2;
}

string Grid::printGrid() const {
    int row, col;

    string gridOut = "  "; //account for initial offset from row
    for(col = 0; col < shotsGrid[0].size(); col++){
        if(col < 10)
            gridOut += " "; //add one space if col is less than 10
        gridOut += "  " + to_string(col);
    }

    gridOut += '\n';
    char temp;
    for(row = 0; row < shotsGrid.size(); row++) {
        if(row < 10)
            gridOut+= " ";
        gridOut += to_string(row);
        for(col = 0; col < shotsGrid[0].size(); col++) {
            temp = shotsGrid.at(row).at(col);
            gridOut += "   ";
            gridOut.push_back(temp);
        }
        gridOut += '\n';
    }
    gridOut += "Total ships: " + to_string(ships.size() + sunk.size()) + "\n";
    gridOut += "Ships remaining: " + to_string(ships.size()) + "\n";
    gridOut += "Ships sunk: " + to_string(sunk.size()) + "\n";
    return gridOut;
}

void Grid::shoot(int row, int col) {
    if (this->checkBounds(row, col))
        throw GridException("Shot exceeds board bounds.");
    if (shotsGrid[row][col] == 'M' || shotsGrid[row][col] == 'H')
        throw GridException("You have already shot position (" + to_string(row) + ", " + to_string(col) + ").");

    if (shotsGrid[row][col] == 'S') {
        shotsGrid[row][col] = 'H';
        hits++;
        for(int i = 0; i < ships.size(); i++){
            if(ships[i].hit(row, col)){
                if(ships[i].getHealth() == 0){
                    this->writeShip(ships[i], 'X');
                    sunk.push_back(ships[i]);
                    ships.erase(ships.begin() + i);
                }
                else{
                    ships.insert(ships.begin(), ships[i]);
                    ships.erase(ships.begin() + i + 1);
                }
                break;
            }
        }
    }
    else if (shotsGrid[row][col] == 'O')
        shotsGrid[row][col] = 'M';

    shots++;
}

void Grid::addShip(const Ship& shipIn) {
    bool validPos = true;
    vector<vector<int>> temp = shipIn.getPos();
    for(int i = 0; i < temp.size(); i++) {
        if (this->checkBounds(temp[i][0], temp[i][1])) {
            validPos = false;
            throw ShipException("The ship isn't on the map.");
        }
        if (shotsGrid[temp[i][0]][temp[i][1]] != 'O') {
            validPos = false;
            throw ShipException("There is a ship in the way.");
        }
    }
    if (validPos) {
        this->writeShip(shipIn, 'S');
        ships.push_back(shipIn);
    }
}

bool Grid::checkBounds(int row, int col) {
    return ((row < 0 || row >= shotsGrid.size()) || (col < 0 || col >= shotsGrid[0].size()));
}

void Grid::writeShip(const Ship& shipIn, char cIn) {
    vector<vector<int>> temp = shipIn.getPos();
    for(int i = 0; i < temp.size(); i++){
        shotsGrid[temp[i][0]][temp[i][1]] = cIn;
    }
}

bool Grid::checkWin() const {
    return (ships.size() == 0);
}

string Grid::printStats() const {
    string stats = "";
    stats += "Hits: " + to_string(hits) + "\n";
    stats += "Shots: " + to_string(shots) + "\n";
    stats += "Accuracy: " + to_string(hits/(float)shots);
    return stats;
}




