#include <iostream>
#include <string>
// verbing
// Given a string, if its length is at least 3,
// add 'ing' to its end.
// Unless it already ends in 'ing', in which case
// add 'ly' instead.
// If the string length is less than 3, leave it unchanged.
// Return the resulting string.

int main()
{
	std::cout << "Enter a string" << std::endl;
		std::string myString;
			std::getline(std::cin, myString);
			//	std::cout << myString << std::endl;

				if (myString.length() < 3 )
					{
							std::cout << myString << std::endl;
								}
									else
										{
												char thirdLast = myString[myString.length() - 3];
														char secondLast = myString[myString.length() - 2];
																char last = myString[myString.length() - 1];
																		if (thirdLast == 'i' && secondLast == 'n' and last == 'g')
																				{
																							std::cout << myString << "ly" << std::endl;
																									}
																											else
																													{
																																std::cout << myString << "ing" << std::endl;
																																		}
																																			}
																																			}
