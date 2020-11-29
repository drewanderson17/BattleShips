/*
 * A testing class for the Grid class.
 * 
 * To run (macOS):
 * g++ TestGrid.cpp Grid.cpp Ship.cpp -o testgrid; ./testgrid
 * 
 */
#include <iostream>
#include <assert.h>
using namespace std;

#include "Grid.h"

void testGrid(){
    cout << "PLEASE READ" << endl;
    cout << "Testing the grid class!\nAn assertion error will be thrown if any tests fail." << endl;
    // Testing defautl constructor
    cout << "\nTesting constructor: " << endl;
    Grid customGrid("abc", 99);
    assert (customGrid.getPlayerName() == "abc");
    assert (customGrid.getGrid().size() == 99);
    assert (customGrid.getSunkCount() == 0);
    assert (customGrid.getShots() == "0");
    assert (customGrid.getHits() == "0");
    cout << "\nPassed!" << endl;
    // Testing default constructor checks legality of parameters
    cout << "\nTesting Grid class throws an exception if given illegal parameters: ";
    try {
        Grid errorGrid("hey", -2);
        assert(false);
    }
    catch (GridException){
    }
    cout << "Passed!" << endl;
    // Test shoot() functionality
    cout << "Testing shoot() functionality: " << endl;
    Ship ship("Bike", 1, 2);
    ship.placeShip(1, 2, true);
    customGrid.addShip(ship);
    customGrid.shoot(1, 2);
    assert (customGrid.getSunkCount() == 0);
    assert (customGrid.isWon() == false);
    assert (customGrid.getHits() == "1");
    assert (customGrid.getAccuracy() == "100 %");
    cout << "Passed!" << endl;
    // Test shoot throws exceptions
    cout << "\nTesting shoot() throws exception" << endl;
    try {
        customGrid.shoot(1000000000, 4);
        assert(false);
    }
    catch (GridException){
    }
    cout << "Passed!" << endl;
    // Test sunk functionality
    cout << "\nTesting sunk functionlity" << endl;
    customGrid.shoot(1, 3);
    assert (customGrid.isWon());
    assert (customGrid.getSunkCount() == 1);
    assert (customGrid.getHits() == "2");
    assert (customGrid.getAccuracy() == "100 %");
    cout << "Passed!" << endl;
}

int main(){
    testGrid();
    return 0;
}