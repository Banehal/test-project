 #include <iostream>                                                                                           
 #include <array>                                                                                              
// nothing                                                                                                     
 const char emptySymbol{' '};                                                                                  
 const char wallSymbol{'X'};                                                                                   
                                                                                                               
 const int mazeColumns{30};                                                                                    
 const int mazeRows{20};                                                                                       
                                                                                                               
 void initializeMaze(std::array<std::array<char, mazeColumns>, mazeRows> &rMaze)                               
 {                                                                                                             
        for (int row = 0; row < mazeRows; row++)                                                               
        {                                                                                                      
                for (int column = 0; column < mazeColumns; column++)                                           
                {                                                                                              
                        if ((0 == row) or (0 == column) or (mazeRows - 1 == row) or (mazeColumns -1 == column))
                        {                                                                                      
                                rMaze[row][column] = wallSymbol;                                               
                        }                                                                                      
                        else                                                                                   
                        {                                                                                      
                                rMaze[row][column] = emptySymbol;                                              
                        }                                                                                      
                }                                                                                              
        }                                                                                                      
 }                                                                                                             
 void drawMaze(const std::array<std::array<char, mazeColumns>, mazeRows> &rMaze)                               
 {                                                                                                             
        for (int row = 0; row <mazeRows; row++)                                                                
        {                                                                                                      
                for (int column = 0; column < mazeColumns; column++)                                           
                {                                                                                              
                        char ch = rMaze[row][column];                                                          
                        std::cout << ch;                                                                       
                }                                                                                              
                std::cout << std::endl;                                                                        
        }                                                                                                      
 }                                                                                                             
                                                                                                               
 int main()                                                                                                    
 {                                                                                                             
        std::array<std::array<char, mazeColumns>, mazeRows> maze;                                              
        initializeMaze(maze);                                                                                  
        drawMaze(maze);                                                                                        
 }                                                                                                             
