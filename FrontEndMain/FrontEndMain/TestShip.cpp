/*
 * A testing class for the Ship class.
 * 
 * To run (macOS):
 * g++ testShip.cpp Ship.cpp -o testship; ./testship
 * 
 */
#include <iostream>
#include <assert.h>
using namespace std;

#include "Ship.h"

void testShip(){
    // Test default constructor
    cout << "PLEASE READ" << endl;
    cout << "Testing the ship class!\nAn assertion error will be thrown if any tests fail." << endl;
    cout << "\nTesting default constructor: " << endl;
    Ship defaultShip;
    assert (defaultShip.getLength() == 1);
    assert (defaultShip.getWidth() == 1);
    assert (defaultShip.toStr() == "Default");
    assert (defaultShip.isPositioned() == false);
    cout << "Passed!" << endl;
    // Test custom constructor
    cout <<"\nTesting custom constructor: " << endl;
    Ship customShip("Car", 2, 3);
    assert (customShip.getLength() == 2);
    assert (customShip.getWidth() == 3);
    assert (customShip.toStr() == "Car");
    assert (customShip.isPositioned() == false);
    assert (customShip.getPos().size() == 6);
    assert (customShip.getPos().at(0).size() == 3);
    cout << "Pased!" << endl;
    // Test custom constructor throws error
    cout << "\nTesting custom constructor only accepts valid input: " << endl;
    try {
        Ship error1("", 1, 2);
        assert(false);
    }
    catch (ShipException){
    }
    try {
        Ship error1("car", 0, 2);
        assert(false);
    }
    catch (ShipException){
    }
    try {
        Ship error1("", 1, 0);
        assert(false);
    }
    catch (ShipException){
    }
    cout << "Passed!" << endl;
    // Test placeShip()
    cout << "\nTest placeShip" << endl;
    customShip.placeShip(1, 2, true);
    vector<vector<int> > posi = customShip.getPos();
    assert(posi[0][0] == 1 && posi[0][1] == 2);
    assert(posi[1][0] == 2 && posi[1][1] == 2);
    assert(posi[2][0] == 1 && posi[2][1] == 3);
    assert(posi[3][0] == 2 && posi[3][1] == 3);
    assert(posi[4][0] == 1 && posi[4][1] == 4);
    assert(posi[5][0] == 2 && posi[5][1] == 4);
    cout << "Passed!" << endl;
    // Test getHealth()
    cout << "\nTesting getHealth()" << endl;
    assert (customShip.getHealth() == 6);
    cout << "Passed!" << endl;
    // Test hit()
    cout << "\nTesting hit()" << endl;
    assert (customShip.hit(1, 2) == true);
    assert (customShip.getHealth() == 5);
    cout << "Passed!" << endl;
    // Test overloaded = operator
    cout << "\nTesting overloaded = operator" << endl;
    Ship otherVector = customShip;
    assert(otherVector.getHealth() == customShip.getHealth());
    assert(otherVector.getLength() ==  customShip.getLength());
    assert(otherVector.getWidth() ==  customShip.getWidth());
    assert(otherVector.toStr() == customShip.toStr());
    assert(otherVector.isPositioned() == customShip.isPositioned());
    assert(otherVector.getPos() == customShip.getPos());
    // Testing for aliasing
    otherVector.hit(1, 3);
    assert(otherVector.getPos() != customShip.getPos());
    assert(otherVector.getHealth() != customShip.getHealth());
    cout << "Passed!" << endl;
    // Test copy constructor
    cout << "\nTesting copy constructor" << endl;
    Ship copyShip(customShip);
    assert(copyShip.getHealth() == customShip.getHealth());
    assert(copyShip.getLength() ==  customShip.getLength());
    assert(copyShip.getWidth() ==  customShip.getWidth());
    assert(copyShip.toStr() == customShip.toStr());
    assert(copyShip.isPositioned() == customShip.isPositioned());
    assert(copyShip.getPos() == customShip.getPos());
    // Testing for aliasing
    copyShip.hit(1, 4);
    assert(copyShip.getPos() != customShip.getPos());
    assert(copyShip.getHealth() != customShip.getHealth());
    cout << "Passed!" << endl;
}

int main() {
    testShip();
    return 0;
}
