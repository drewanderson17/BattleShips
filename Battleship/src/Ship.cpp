/* 
* Outline of functions used to interact with Ship object.
*/

#include "Ship.h"

#include <vector>
#include <string>

ShipException::ShipException(const string &m) : message(m) {}
string ShipException::what() const { return message; }

Ship::Ship(string nameIn, int lengthIn) {
    name = nameIn;
    length = lengthIn;

}

Ship::Ship(string nameIn, int lengthIn, int row, int col, bool dirIn) {
    name = nameIn;
    length = lengthIn;
    placeShip(row, col, dirIn);
}

void Ship::placeShip(int row, int col, bool dir) {

    if(pos.size() != 0) {
        throw ShipException("The ship has already been placed.");
    }
    else {

        vector<int> cell;
        cell.push_back(row);
        cell.push_back(col);
        cell.push_back(1);
        vector<vector<int>> ship(length, cell);

        for (int i = 0; i < ship.size(); i++) {
            if (dir)
                ship[i][0] += i;
            else
                ship[i][1] += i;
        }
        pos = ship;
    }
}

bool Ship::hit(int row, int col) {
    bool hit = false;
    for (int i = 0; i < pos.size(); i++)
        if(row == pos[i][0] && col == pos[i][1]){
            hit = true;
            pos[i][2] = 0;
            break;
        }
    return hit;
}

vector<vector<int>> Ship::getPos() const {
    return pos;
}

int Ship::getHealth() const {
    int health = 0;
    for(int i = 0; i < pos.size(); i++)
        health += pos[i][2];
    return health;
}

string Ship::toStr() {
    return name;
}





