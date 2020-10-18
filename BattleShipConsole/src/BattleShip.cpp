
#include <iostream>
#include <vector>
#include <string>

#include "BattleShip.h"

using namespace std;

Player::Player(){
	busCount = 1;
	bikeCount = 1;
	carCount = 1;
};


Game::Game(){
	boardSize = 10;
	Player playa;
	playerOne = playa;
	playerTwo = playa;
	vector<vector<string>> b(boardSize, vector<string> (boardSize, "X"));
	pOneboard = b;
	pTwoboard = b;
}

Coordinates getCoordinates(string vehichle){
	Coordinates c;
	cout << "Choose X,Y coordinates for your " << vehichle << " (0-9)" << endl;
	cout << "X:";
	cin >> c.x;
	cout << "Y:";
	cin >> c.y;
	cout << "Type 'V' for Vertical Placement" << endl;
	cout << "Type 'H' for Horizontal Placement" << endl;
	cout << "Direction:";
	cin >> c.direction;
	return c;
}

void Game::SetBoard(vector<vector<string>>& board, Player playerX){
	bool canPlace;
	while (playerX.carCount > 0){
		Coordinates car_placement = getCoordinates("Car");
		canPlace = ValidPlacement(board, car_placement, "Car");
		if (canPlace){
			PlaceShip(board, car_placement,"Car");
			playerX.carCount -= 1;
		} else{
			cout << "Try again, that spot is taken or a car cannot be placed there" << endl;
		}
	}
	while (playerX.busCount > 0){
		Coordinates bus_placement = getCoordinates("Bus");
		canPlace = ValidPlacement(board, bus_placement ,"Bus");
		if (canPlace){
			PlaceShip(board, bus_placement, "Bus");
			playerX.busCount -= 1;
		} else{
			cout << "Try again, that spot is taken or a bus cannot be placed there" << endl;
		}
	}
	while (playerX.bikeCount > 0){
		Coordinates bike_placement = getCoordinates("Bike");
		canPlace = ValidPlacement(board,bike_placement, "Bike");
		if (canPlace){
			PlaceShip(board, bike_placement, "Bike");
			playerX.bikeCount -= 1;
		} else{
			cout << "Try again, that spot is taken or a bike cannot be placed there" << endl;
		}
	}
}

Player Game::getPlayer(int player_num){
	if (player_num == 1)
		return playerOne;
	return playerTwo;
}

bool Game::ValidPlacement(vector<vector<string>>& board, Coordinates placement, string type){
	int width;
	int height;
	if (type == "Car"){
		height = car.height;
		width = car.width;
	} else if (type == "Bus"){
		height = bus.height;
		width = bus.width;
	} else {
		height = bike.height;
		width = bike.width;
	}

	if (placement.direction == "V"){
		if ( (placement.x+width <= boardSize) && (placement.y+height <= boardSize) ){
			for (int i = placement.y; i < placement.y+height; i++){
				for(int j = placement.x; j < placement.x+width; j++){
					if (board[i][j] != "X"){return false;}
				}
			}
		} else{
			return false;
			}
	} else {     // Horizontal
		if ( (placement.x+height <= boardSize) && (placement.y+width <= boardSize) ){
					for (int i = placement.y; i < placement.y+width; i++){
						for(int j = placement.x; j < placement.x+height; j++){
							if (board[i][j] != "X"){return false;}
						}
					}
				} else{return false;}
	}
	return true;
}

void Game::PlaceShip(vector<vector<string>>& board, Coordinates placement, string type){
	int width;
	int height;
	string identifier;

	if (type == "Car"){
		height = car.height;
		width = car.width;
		identifier = "C";
	} else if (type == "Bus"){
		height = bus.height;
		width = bus.width;
		identifier = "B";
	} else {
		height = bike.height;
		width = bike.width;
		identifier = "P";
	}

	if (placement.direction == "V"){
			for (int i = placement.y; i < placement.y+height; i++){
				for(int j = placement.x; j < placement.x+width; j++){
					board[i][j] = identifier;
				}
			}
	} else {     // Horizontal
		for (int i = placement.y; i < placement.y+width; i++){
			for(int j = placement.x; j < placement.x+height; j++){
				board[i][j] = identifier;
				}
			}
		}
}


void Game::TakeTurn(vector<vector<string>>& board){
	int X, Y;
	cout << "Choose X,Y coordinates for your shot!!!" << endl;
	cout << "X:";
	cin >> X;
	cout << "Y:";
	cin >> Y;
	if (board[Y][X].compare("H") == 0){
			cout << "Already hit this tile!" << endl << endl;
	} else if (board[Y][X].compare("X") != 0){
		board[Y][X] = "H";
		cout << "HIT" << endl << endl;
	} else{
		cout << "MISS" << endl << endl;
	}
}

bool Game::checkWin(vector<vector<string>>& board){
	bool trigger(true);
	for (int i = 0; i < board.size(); i++){
		for (int j = 0; j < board[i].size(); j++){
			if (board[i][j].compare("C") == 0 || board[i][j].compare("B") == 0 || board[i][j].compare("P") == 0 ){
				trigger =  false;
			}
		}
	}
	return trigger;
}


void Game::PrintBoard(vector<vector<string>>& board){
	for (int i = 0; i < board.size(); i++){
			    for (int j = 0; j < board[i].size(); j++){
			        cout << board[i][j] << " ";
			    }
			    cout << endl;
			}
}
