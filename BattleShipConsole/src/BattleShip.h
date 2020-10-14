
#pragma once

#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Bus{
	int width = 2;
	int height = 3;
	string pathImg = "Path/To/Bus";
};

struct Car{
	int width = 1;
	int height = 3;
	string pathImg = "Path/To/Car";
};

struct Bike{
	int width = 1;
	int height = 2;
	string pathImg = "Path/To/Bike";
};

class Player {
public:
	Player();
	int busCount;
	int carCount;
	int bikeCount;
};


class Game{
public:
	Game();
	void SetBoard(vector<vector<string>>& board, Player playerX);
	bool ValidPlacement(vector<vector<string>>& board, int x, int y,
			string direction, string type);
	void PlaceShip(vector<vector<string>>& board, int x, int y,
			string direction, string type);
	Player getPlayerOne();
	Player getPlayerTwo();
	void PrintBoard(vector<vector<string>>& board);
	void TakeTurn(vector<vector<string>>& board);
	bool checkWin(vector<vector<string>>& board);
	vector<vector<string>> pOneboard;
	vector<vector<string>> pTwoboard;
private:
	int boardSize;
	Player playerOne;
	Player playerTwo;
	Bike bike;
	Car car;
	Bus bus;
};
