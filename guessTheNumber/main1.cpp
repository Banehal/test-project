 #include <iostream>
 #include <random>

 int generateRandomNumber(int min, int max)
 {
     static std::random_device randomDevice;
     static std::mt19937 engine{randomDevice()};
     std::uniform_int_distribution<int> distribution(min, max);
     return distribution(engine);
 }
 int main()
 {
 	std::cout << "Choose the game difficulty: " << std::endl;
 	int gameDifficulty{0};
 	std::cin >> gameDifficulty;
	std::cout << "The difficulty you have chosen is: " << gameDifficulty  << std::endl;

        const int randomGeneratedNumber = generateRandomNumber( 1, 100*gameDifficulty );
        std::cout << "The random generated number is :" << randomGeneratedNumber << std::endl;

	int numberOfAttempts{0};
	do
	{
		std::cout << "Guess the number: ";
		int usersNumber;
		std::cin >> usersNumber;
	//	std::cout << usersNumber << std::endl;

		if ( randomGeneratedNumber == usersNumber )
		{
			std::cout << "You have won!!!" << std::endl;
			break;
		}
		else if ( randomGeneratedNumber > usersNumber )
		{
			std::cout << "You should try to enter a bigger number. " << std::endl;
		}
		else
		{
			std::cout << "You should try to enter a smaller number. " << std::endl;
		}
		numberOfAttempts++;
	} while (numberOfAttempts < 10);
	if ( 10 == numberOfAttempts )
	{
		std::cout << "You have lost" << std::endl;
	}
 }
