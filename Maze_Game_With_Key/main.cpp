 #include <iostream>
 #include <string>

 #include "game-defs.h"
 #include "game-map-utils.h"

 bool ifTheKeyIsFound{false};

 // Checks if user want to play
 // Return true if user wants to play; false otherwise.
 bool doesUserWantsToPlay()
 {
	bool rResult = false;

	std::cout << "Maze Game" <<std::endl;

	while (true)
	{
		std::cout << "Do you want to play? (1 - yes, 0 - no): ";

		std::string answer;
		std::cin >> answer;

		if (("1" == answer) || ("0" == answer))
		{
			rResult = ("1" == answer);
			break;
		}

		std:: cout << "Sorry, I did not understand." << std::endl;
	}

	return rResult;
 }

 // Ganerates maze
 // Parameters:
 //	maze - reference to maze field will be modified
 //		(wall added, added character and exit)
 void generateMaze(std::array<std::array<char, mazeColumns>, mazeRows> &prMaze)
 {
	for (int row = 0; row < mazeRows; row++)
	{
		for (int column = 0; column < mazeColumns; column++)
		{
			if ((0 == row) || (mazeRows - 1 == row) || (0 == column) || (mazeColumns - 1 == column))
			{
				prMaze[row][column] = wallSymbol;
			}
			else
			{
				prMaze[row][column] = emptySymbol;
			}
		}
	}

	// Places charatcer, exit and key.
	placeCharRandomly(prMaze, characterSymbol, 1);
	placeCharRandomly(prMaze, exitSymbol, 1);
	placeCharRandomly(prMaze, keySymbol, 1); 
 }

 // Moves character according to given command and returns eaten symbol (in any).
 // Parametres:
 //	row - character row position
 //	column - character column position
 //	command - test string with given comman("l" - left, "r" - right, "u" - up and "d" - down)
 //	prMaze - reference to maze field; will be modified as a result of command execution.
 char moveAndGather(int row,
 		    int column,
 		    char command,
 		    std::array<std::array<char, mazeColumns>, mazeRows> &prMaze)
 {
	char rCharMovedOnto = emptySymbol;

	// Takes character out from map
	prMaze[row][column] = emptySymbol;

	std::string theKeyIsFound{"The key is found!!! You should head to the exit (#) !!!"};

	if ('l' == command)
	{
		rCharMovedOnto = prMaze[row][column -1 ];

		if (rCharMovedOnto != wallSymbol and (rCharMovedOnto != exitSymbol || ifTheKeyIsFound))
		{
			if (rCharMovedOnto == keySymbol)
			{
				std::cout << theKeyIsFound << std::endl;
				ifTheKeyIsFound = true;
			}
			column--;
		}
	}

	if ('r' == command)
	{
		rCharMovedOnto = prMaze[row][column+1];

		if (rCharMovedOnto != wallSymbol and (rCharMovedOnto != exitSymbol || ifTheKeyIsFound))
		{
			if (rCharMovedOnto == keySymbol)
			{
				std::cout << theKeyIsFound << std::endl;
				ifTheKeyIsFound = true;
			}
			column++;
		}
	}

	if ('u' == command)
	{
		rCharMovedOnto = prMaze[row - 1][column];

		if (rCharMovedOnto != wallSymbol and (rCharMovedOnto != exitSymbol || ifTheKeyIsFound))
		{
			if (rCharMovedOnto == keySymbol)
			{
				std::cout << theKeyIsFound << std::endl;
				ifTheKeyIsFound = true;
			}
			row--;
		}
	}

	if ('d' == command)
	{
		rCharMovedOnto = prMaze[row + 1][column];

		if (rCharMovedOnto != wallSymbol and (rCharMovedOnto != exitSymbol || ifTheKeyIsFound))
		{
			if (rCharMovedOnto == keySymbol)
			{
				std::cout << theKeyIsFound << std::endl;
				ifTheKeyIsFound = true;
			}
			row++;
		}
	}

	// Places character back with new position
	prMaze[row][column] = characterSymbol;

	return rCharMovedOnto;
 }

 // Prints message to player.
 // Parameters:
 //	message - text message to player.
 void gameMessage(const std::string& message)
 {
	std::cout << std:: endl << message << std::endl << std::endl;
 }

 // Moves character and checks if exit was found as a result of that move.
 // Parameters:
 //	prMaze - reference to maze field; will be modified while player moves.
 bool moveCharacterAndCheckIfExitFound(std::array<std::array<char, mazeColumns>, mazeRows> &prMaze)
 {
	bool rExitFound = false;

	int charRow = 1;
	int charColumn = 1;
	if (scanForChar(prMaze, characterSymbol, charRow, charColumn))
	{
		std::cout << "Command (l - left, r - right, u -up, d - down):";
		char command;
		std::cin >> command;

		const char charMovedOnto = moveAndGather(charRow, charColumn, command, prMaze);

		if (charMovedOnto == wallSymbol)
		{
			gameMessage("Cannot move here!");
		}

		if (ifTheKeyIsFound == true)
		{
			if (charMovedOnto == exitSymbol)
			{
				gameMessage("Exit Found!");
				rExitFound = true;
			}
		}
		else
		{
			gameMessage("Find the key!!!");
		}
	}
	else
	{
		gameMessage("Error: cannot find char!");
	}
	return rExitFound;
 }

 // Executes one round of the game
 void playMazeGame()
 {
	std::cout << "Let's Start!" << std::endl;

	std::array<std::array<char, mazeColumns>, mazeRows> maze;
	generateMaze(maze);

	do
	{
		drawMaze(maze);
	}
	while (!moveCharacterAndCheckIfExitFound(maze));
 }

 int main()
 {
	while (doesUserWantsToPlay())
	{
		playMazeGame();
	}
 }

