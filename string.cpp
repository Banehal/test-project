 #include <iostream>
 #include <string>

 int main()
 {
    std::string wordOne;
    std::cout << "Enter first word:" << std::endl;
    std::cin >> wordOne;

  //  std::string wordTwo;
  //  std::cout << "Enter second word" << std::endl;
  //  std::cin >> wordTwo;

  //  std::cout << "These words are: " << wordOne << " and " << wordTwo << "." << std::endl;
  //  std::cout << wordOne.back() << std::endl;

    int wordLength = wordOne.length();
  //  std::cout << wordOne.length() << std::endl;
  //  std::cout << wordLength << std::endl;
      std::cout << wordOne[wordLength-2] << std::endl;



 }
