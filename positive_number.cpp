  #include <iostream>

  int main()
  {
      std::cout << "Enter a positive number" << std::endl;
      std::cout << std::boolalpha;

      bool isInputWrong{false};
      int n;
      do
      {
          std::cout << "Input:";

//          int n;
          std::cin >> n;

          isInputWrong = ( n < 0 );
          if (isInputWrong)
          {
             std::cout << "You've entered wrong number. Your input is: " << n << std::endl;
          }

       } while (isInputWrong);

    //   std::cout << "You've entered a positive number" << std::endl;
      int result{1};
      for (int i=1; i<=n; i=i+1)
         {
//            int result;
            result  = result * i;
         }
            std::cout << n << "! = " << result << std::endl;
   }
