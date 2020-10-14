
#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "BattleShip.h"

int main() {
	Game Game1;
	bool winCheck(false);
	int changeTurn(0);
	cout << "Let the games begin" << endl;
	cout << "Player One will set his board first" << endl;
	Game1.SetBoard(Game1.pOneboard, Game1.getPlayerOne());
	cout << "Now Player Two will set his board" << endl;
	Game1.SetBoard(Game1.pTwoboard, Game1.getPlayerTwo());

	cout << "Player One Board" << endl;
	Game1.PrintBoard(Game1.pOneboard);

	cout << "Player Two Board" << endl;
	Game1.PrintBoard(Game1.pTwoboard);

	//Begin Shooting at each other

	while (true){
		if (changeTurn % 2 == 0){
			//Player One's turn
			cout << "PLAYER ONE TURN" << endl;
			Game1.TakeTurn(Game1.pTwoboard);
			winCheck = Game1.checkWin(Game1.pTwoboard);
			if (winCheck == true){
				cout << "PLAYER ONE WINS!!!!" << endl;
				break;
			}
		} else {
			//Player Two's turn
			cout << "PLAYER TWO TURN" << endl;
			Game1.TakeTurn(Game1.pOneboard);
			winCheck = Game1.checkWin(Game1.pOneboard);
			if (winCheck == true){
				cout << "PLAYER TWO WINS!!!!" << endl;
				break;
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




