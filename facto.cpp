#include <iostream>

int main() 
{
    int result{1};
    int n;

    std::cout << "Enter a number" << std::endl;
    std::cin >> n;

    if (n<0) 
    {
      std::cout << "Enter a positive number" << std::endl;
    }
     else 
    
    { 
      
      for (int i=1; i<=n; i=i+1) 
      {
          result = result * i;
      }
         std::cout << n << "! = " << result << std::endl;
    }    
}
     
