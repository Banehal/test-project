 #include <iostream>
 #include <string>
// Task: B. both_ends
// Given a string s, return a string made of the first 2
// and the last 2 chars of the original string,
// so 'spring' yields 'spng'. However, if the string length
// is less than 2, return instead the empty string.

 int main()
 {
    std::string wordOne;
    std::cout << "Enter first word:" << std::endl;
    std::cin >> wordOne;

      if (wordOne.length() < 2)
      {
        std::cout << "Empty string" << std::endl; 
      }
      else
      {
       char firstChar = wordOne[0];
       char secondChar = wordOne[1];
       int wordLength = wordOne.length();
       char secondLastChar = wordOne[wordLength-2];
       char lastChar = wordOne[wordLength-1];
       std::cout << firstChar << secondChar << secondLastChar << lastChar << std::endl; 
      }
  //  std::string wordTwo;
  //  std::cout << "Enter second word" << std::endl;
  //  std::cin >> wordTwo;

  //  std::cout << "These words are: " << wordOne << " and " << wordTwo << "." << std::endl;
  //  std::cout << wordOne.back() << std::endl;

//    int wordLength = wordOne.length();
  //  std::cout << wordOne.length() << std::endl;
  //  std::cout << wordLength << std::endl;
//      std::cout << wordOne[wordLength-2] << std::endl;



 }
