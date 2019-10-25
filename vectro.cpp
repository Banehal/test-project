 #include <iostream>
 #include <string>
 #include <vector>

    const int  exitValue{777};

   int main()
   {
      std::vector<int> numberList;
      
      int nextNumber;
      
      do
      {
   
         std::cout << "Enter a digit: " << std::endl;
         std::cin >> nextNumber;
         
         if ( nextNumber != exitValue )
         {
             numberList.push_back(nextNumber);
         }
       }
       while ( nextNumber != exitValue);
       
       for (int index = 0; index < numberList.size(); ++index)
       {
          std::cout << index << " : " << numberList.at(index) << std::endl;
       }
    } 
