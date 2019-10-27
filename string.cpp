 #include <iostream>
 #include <string>
// Task: D. MixUp
// Given strings a and b, return a single string with a and b separated
// by a space '<a> <b>', except swap the first 2 chars of each string.
// e.g.
//  'mix', pod' -> 'pox mid'
//  'dog', 'dinner' -> 'dig donner'
// Assume a and b are length 2 or more.

// const int quantityOfSwappedChars{2};

 int main()
 {
    int quantityOfSwappedChars;
    std::cout<< "Enter quanity of swapped chars" << std::endl;
    std::cin >> quantityOfSwappedChars;
    
    std::string wordOne;
    std::cout << "Enter first word:" << std::endl;
    std::cin >> wordOne;

    std::string wordTwo;
    std::cout << "Enter second word:" << std::endl;
    std::cin >> wordTwo;

    std::string wordThree{wordOne};

    for ( int i=0; i<quantityOfSwappedChars; ++i)
    {
       wordOne[i] = wordTwo[i];
       wordTwo[i] = wordThree[i];
    }
    
 //   wordOne[0] = wordTwo[0];
 //   wordOne[1] = wordTwo[1];
 //   wordTwo[0] = wordThree[0];
 //   wordTwo[1] = wordThree[1];

   std::cout << wordOne << " " << wordTwo << std::endl;
   // char firstChar = wordOne[0];
 //   int wordLength = wordOne.length();
  //  for (int i=1; i< wordOne.length(); ++i)
 //   {
 //      if ( wordOne[i] == wordOne[0] )
 //      {
 //         wordOne[i] = '*';
 //      }
 //   }
 //   std::cout << wordOne << std::endl; 
 //      std::cout << wordOne[i];// << std::endl;
 //   } 
 //      std::cout << std::endl;
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
