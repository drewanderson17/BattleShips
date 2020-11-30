#include <QtTest>
#include "tst_testbattleship.h"
#include "../../FrontEndMain/Ship.h"
#include "../../FrontEndMain/Grid.h"

TestBattleShip::TestBattleShip()
{

}

TestBattleShip::~TestBattleShip()
{

}

void TestBattleShip::test_default_ship_constructor()
{
    Ship defaultShip;
    QVERIFY(defaultShip.getLength() == 1);
    QVERIFY (defaultShip.getWidth() == 1);
    QVERIFY (defaultShip.toStr() == "Default");
    QVERIFY (defaultShip.isPositioned() == false);
}

void TestBattleShip::test_custom_ship_constructor()
{
    Ship customShip("Car", 2, 3);
    QVERIFY (customShip.getLength() == 2);
    QVERIFY (customShip.getWidth() == 3);
    QVERIFY (customShip.toStr() == "Car");
    QVERIFY (customShip.isPositioned() == false);
    QVERIFY (customShip.getPos().size() == 6);
    QVERIFY (customShip.getPos().at(0).size() == 3);

}

void TestBattleShip::test_custom_ship_constructor_exceptions()
{
    QVERIFY_EXCEPTION_THROWN(Ship error1("", 1, 2), ShipException);
    QVERIFY_EXCEPTION_THROWN(Ship error1("car", 0, 2), ShipException);
    QVERIFY_EXCEPTION_THROWN(Ship error1("", 1, 0), ShipException);
}

void TestBattleShip::test_place_ship()
{
    Ship customShip("Car", 2, 3);
    customShip.placeShip(1, 2, true);
    vector<vector<int> > posi = customShip.getPos();
    QVERIFY(posi[0][0] == 1 && posi[0][1] == 2);
    QVERIFY(posi[1][0] == 2 && posi[1][1] == 2);
    QVERIFY(posi[2][0] == 1 && posi[2][1] == 3);
    QVERIFY(posi[3][0] == 2 && posi[3][1] == 3);
    QVERIFY(posi[4][0] == 1 && posi[4][1] == 4);
    QVERIFY(posi[5][0] == 2 && posi[5][1] == 4);
}

void TestBattleShip::test_ship_get_health(){
    Ship customShip("Car", 3, 4);
    customShip.placeShip(1,1, true);
    QVERIFY(customShip.getHealth() == 12);
}

void TestBattleShip::test_ship_hit(){
    Ship customShip("Car", 1, 3);
    customShip.placeShip(4, 5, false);
    QVERIFY(customShip.hit(4, 5) == true);
}

void TestBattleShip::test_ship_overloaded_equals(){
    Ship customShip("Car", 2, 3);
    customShip.placeShip(5, 7, true);
    Ship otherVector = customShip;
    QVERIFY(otherVector.getHealth() == customShip.getHealth());
    QVERIFY(otherVector.getLength() ==  customShip.getLength());
    QVERIFY(otherVector.getWidth() ==  customShip.getWidth());
    QVERIFY(otherVector.toStr() == customShip.toStr());
    QVERIFY(otherVector.isPositioned() == customShip.isPositioned());
    QVERIFY(otherVector.getPos() == customShip.getPos());
    // Testing for aliasing
    otherVector.hit(5, 7);
    QVERIFY((otherVector.getPos() != customShip.getPos()));
    QVERIFY(otherVector.getHealth() != customShip.getHealth());
}

void TestBattleShip::test_ship_copy_constructor(){
    Ship customShip("Car", 1, 5);
    customShip.placeShip(2, 2, true);
    Ship copyShip(customShip);
    QVERIFY(copyShip.getHealth() == customShip.getHealth());
    QVERIFY(copyShip.getLength() ==  customShip.getLength());
    QVERIFY(copyShip.getWidth() ==  customShip.getWidth());
    QVERIFY(copyShip.toStr() == customShip.toStr());
    QVERIFY(copyShip.isPositioned() == customShip.isPositioned());
    QVERIFY(copyShip.getPos() == customShip.getPos());
    // Testing for aliasing
    copyShip.hit(2, 2);
    QVERIFY(copyShip.getPos() != customShip.getPos());
    QVERIFY(copyShip.getHealth() != customShip.getHealth());
}

void TestBattleShip::test_custom_grid_constructor(){
    Grid customGrid("abc", 99);
    QVERIFY (customGrid.getPlayerName() == "abc");
    QVERIFY (customGrid.getGrid().size() == 99);
    QVERIFY (customGrid.getSunkCount() == 0);
    QVERIFY (customGrid.getShots() == "0");
    QVERIFY (customGrid.getHits() == "0");
}

void TestBattleShip::test_grid_exception(){
    QVERIFY_EXCEPTION_THROWN(Grid errorGrid("hey", -2), GridException);
}

void TestBattleShip::test_grid_shoot(){
    Grid customGrid("abcde", 40);
    Ship ship("Bike", 1, 2);
    ship.placeShip(1, 2, true);
    customGrid.addShip(ship);
    customGrid.shoot(1, 2);
    QVERIFY (customGrid.getSunkCount() == 0);
    QVERIFY (customGrid.isWon() == false);
    QVERIFY (customGrid.getHits() == "1");
    QVERIFY (customGrid.getAccuracy() == "100 %");
}

void TestBattleShip::test_grid_shoot_exception(){
    Grid customGrid("abcdefghi", 41);
    QVERIFY_EXCEPTION_THROWN(customGrid.shoot(3, 42), GridException);
}

void TestBattleShip::test_grid_sunk(){
    Ship ship("Bike", 1, 2);
    ship.placeShip(1, 2, true);
    Grid customGrid("heyyy", 11);
    customGrid.addShip(ship);
    customGrid.shoot(1, 2);
    customGrid.shoot(1, 3);
    assert (customGrid.isWon());
    assert (customGrid.getSunkCount() == 1);
    assert (customGrid.getHits() == "2");
    assert (customGrid.getAccuracy() == "100 %");
    assert (customGrid.getMostRecentlySunkShipName() == "Bike");

}

QTEST_APPLESS_MAIN(TestBattleShip)
