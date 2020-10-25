/* CISC 320 Group Project: Team Cobol
*  Queen's Themed version of Battleship
*/

#include <iostream>
#include <random>
#include <ctime>

#include "Grid.h"

using namespace std;

// To generate random numbers, referred to:
// https://stackoverflow.com/questions/33044735/c-generating-random-numbers-inside-loop/33045918
default_random_engine seed (chrono::steady_clock::now().time_since_epoch().count());

int main() {
    int gridSize = 15;
    string name = promptPlayerForName(1);
    Grid grid1(gridSize, name);
    grid1.setUpBoard();
    name = promptPlayerForName(2);
    Grid grid2(gridSize, name);
    grid2.setUpBoard();

    bool quit = false;
    // generates random number between 1 and 2 (inclusive)
    uniform_int_distribution<int> uid {1,2};
    int player = uid(seed);
    if (player == 1){
        cout << grid1.getPlayerName() << " was picked randomly to start!" << endl;
    }
    else {
        cout << grid2.getPlayerName() << " was picked randomly to start!" << endl;
    }
    while (!grid1.keepPlaying() && !grid2.keepPlaying() && !quit){
        if (player == 1){
            cout << grid2.printGrid();
            grid2.attack(grid1.getPlayerName());
        }
        else {
            cout << grid1.printGrid();
            grid1.attack(grid2.getPlayerName());
        }
        player = (player + 1) % 2;
    }
    displayEndOfGameStats(grid1, grid2);

    return 0;
}
