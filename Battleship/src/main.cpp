#include <iostream>

#include "Grid.h"

using namespace std;

int main() {
    Grid grid(15);
    int row, col;

    Ship ship1(4, 3, 7, 0);
    Ship ship2(4, 3, 1, 1);
    Ship ship3(3, 0, 0, 0);
    Ship ship4(5, 9, 3, 0);

    try{
        grid.addShip(ship1);
        grid.addShip(ship2);
        grid.addShip(ship3);
        //grid.addShip(ship4);
    } catch (ShipException& e){
        cerr << e.what() << endl;
    }

    cout << grid.printGrid() << endl;

    bool quit = false;

    do {
        cout << "Enter a row: ";
        cin >> row;
        cout << "Enter a column: ";
        cin >> col;

        try {
            grid.shoot(row, col);
        } catch (GridException &e) {
            cerr << e.what() << endl;
        }
        cout << grid.printGrid() << endl;
    } while (!grid.checkWin() || quit);
    cout << grid.printStats() << endl;

    return 0;
}
