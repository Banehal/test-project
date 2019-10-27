 #include <iostream>
 #include <string>
// Task: C. fix_start
// Given a string s, return a string
// where all occurences of its first char have
// been changed to '*', except do not change
// the first char itself.
// e.g. 'babble' yields 'ba**le'
// Assume that the string is length 1 or more.
// Hint: s.replace(stra, strb) returns a version of string s
// where all instances of stra have been replaced by strb.


 int main()
 {
    std::string wordOne;
    std::cout << "Enter first word:" << std::endl;
    std::cin >> wordOne;

    char firstChar = wordOne[0];
 //   int wordLength = wordOne.length();
    for (int i=0; i< wordOne.length(); ++i)
    {
       if ( wordOne[i] == firstChar )
       {
          wordOne[i] = '*';
       }
       std::cout << wordOne[i];// << std::endl;
    } 
       std::cout << std::endl;
  //    if (wordOne.length() < 2)
  //   {
  //      std::cout << "Empty string" << std::endl; 
  //    }
  //    else
  //    {
  //     char firstChar = wordOne[0];
  //     char secondChar = wordOne[1];
  //     int wordLength = wordOne.length();
  //     char secondLastChar = wordOne[wordLength-2];
  //     char lastChar = wordOne[wordLength-1];
  //     std::cout << firstChar << secondChar << secondLastChar << lastChar << std::endl; 
 //     }
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
