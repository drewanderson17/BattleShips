
#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "BattleShip.h"

void initializeGame(Game& Game1){
	cout << "Let the games begin" << endl;
	cout << "Player One will set his board first" << endl;
	Game1.SetBoard(Game1.pOneboard, Game1.GetPlayer(1));
	cout << "Now Player Two will set his board" << endl;
	Game1.SetBoard(Game1.pTwoboard, Game1.GetPlayer(2));

	cout << "Player One Board" << endl;
	Game1.PrintBoard(Game1.pOneboard);

	cout << "Player Two Board" << endl;
	Game1.PrintBoard(Game1.pTwoboard);

}

int main() {
	Game Game1;
	bool is_over(false);
	int changeTurn(0);
	initializeGame(Game1);

	//Begin Shooting at each other
	while (!is_over){
		if (changeTurn % 2 == 0){
			//Player One's turn
			cout << "PLAYER ONE TURN" << endl;
			Game1.TakeTurn(Game1.pTwoboard);
			is_over = Game1.CheckWin(Game1.pTwoboard);
			if (is_over){
				cout << "PLAYER ONE WINS!!!!" << endl;
				is_over = true;
			}
		} else {
			//Player Two's turn
			cout << "PLAYER TWO TURN" << endl;
			Game1.TakeTurn(Game1.pOneboard);
			is_over = Game1.CheckWin(Game1.pOneboard);
			if (is_over){
				cout << "PLAYER TWO WINS!!!!" << endl;
				is_over=true;
			}
		}
		changeTurn++;
	}
	cout << endl << "Player One Board" << endl << endl;
	Game1.PrintBoard(Game1.pOneboard);

	cout << endl << "Player Two Board" << endl << endl;
	Game1.PrintBoard(Game1.pTwoboard);
	return 0;

}




