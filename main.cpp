#include <iostream>
#include <vector>

using namespace std;

class Wall
{
public:
	int WallSize = 10;
	bool bCollision = true;

};

class Floor
{
public:
	int FloorSize = 10;

};

class Player
{
public:
	int X;
	int Y;

	void Move(int x, int y)
	{

	}
};

class Monster
{
public:
	int X;
	int Y;

	Wall Walls;

	void Move(int x, int y)
	{
		if (Walls.bCollision == true)
		{

		}
		else
		{
			
		}
	}
};

class Destination
{
public:
	int X;
	int Y;
};

class World
{
public:	
	Wall Walls[100];
	Floor Floors[100];
	Destination Dest;
	Player Players;
	Monster Monsters;

	void ArrivePlayer(Destination* InDest)
	{
		if ((Players.X == InDest->X) && (Players.Y == InDest->Y))
		{
			cout << "Game Clear";
		}
	}
};

class Engine
{
public:
	World MyWorld;

	void Run()
	{
		while (true)
		{
			Input();
			Tick();
			Render();
		}
	}
	void Input()
	{

	}
	void Tick()
	{

	}
	void Render()
	{

	}
};

int main()
{
	Engine* MyEngine = new Engine; 
	MyEngine->Run();
	delete MyEngine;
	MyEngine = nullptr;


	return 0;
}





