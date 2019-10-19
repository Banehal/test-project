 #include <iostream>

 int main()
 {
    std::cout << "Enter the number of donuts" << std::endl;
    int donuts;
    std::cin >> donuts;

    if (donuts < 10)
       {
           std::cout << "Number of donuts is " << donuts << std::endl;
       }

    else
       {
          std::cout << "Number of donuts is: many" << std::endl;
       }

 }
