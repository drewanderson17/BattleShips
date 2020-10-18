
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

struct Coordinates{
	int x;
	int y;
	string direction;
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
	Player GetPlayer(int player_num);
	void PrintBoard(vector<vector<string>>& board);
	void TakeTurn(vector<vector<string>>& board);
	bool CheckWin(vector<vector<string>>& board);
	vector<vector<string>> pOneboard;
	vector<vector<string>> pTwoboard;
private:
	int boardSize;
	Player playerOne;
	Player playerTwo;
	Bike bike;
	Car car;
	Bus bus;
	tuple<int, int> getHeightAndWidth(string type);
	bool isValidPlacement(vector<vector<string>>& board, Coordinates placement, string type);
	void placeShip(vector<vector<string>>& board, Coordinates placement, string type);
	
};

// Non-Member util functions
// Prompts user for x, y coordinates and direction of object to be placed on board
Coordinates getCoordinates(string vehichle);
// Sets and prints board for both players
void initializeGame(Game& Game1);

