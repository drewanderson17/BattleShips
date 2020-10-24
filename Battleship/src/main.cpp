#include <iostream>

#include "Grid.h"

using namespace std;

int main() {
    Grid grid(15);
    int row, col;

    vector<vehichle> vehichles{ BIKES, CARS, BUSES };
    for (const vehichle v : vehichles){
        for (int i = 0; i < v.num; i++){
            grid.setUpBoard(v);
        }
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
            cerr << endl << e.what() << endl;
        }
        cout << grid.printGrid() << endl;
    } while (!grid.checkWin() || quit);
    cout << grid.printStats() << endl;

    return 0;
}
