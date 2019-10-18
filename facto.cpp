#include <iostream>

int main() 
{
    int result{1};
    int n;

    std::cout << "Enter a number" << std::endl;
    std::cin >> n;

      for (int i=1; i<=n; i=i+1) 
      {
          result = result * i;
      }
         std::cout << "Factorial is: " << n << "! " << result << std::endl;
}
     
