// Online C++ compiler to run C++ program online
#include <iostream>
# include <set>
void fn ( )
{
    std::set <std::string> S = {"dog","rat","cat"} ;
  for (auto E : S)
    {
        std::cout << E  << " " << std :: endl;
            }
    
}
void fn2 ( )
{
    std:: set <std:: string > F = { "z","d","b","e","x","a "} ;
    for (auto E : F)
    {
        std::cout << E  << "  " << std :: endl;
    }
}
void fn3 (  )
 { 
    std:: set <std:: string > R = { "8","4","7","1" };
    for (auto E : R)
    {
        std ::cout << E << " " << std :: endl;
    }
    
}
int main()  
{
     std::cout << "set of animals!";
    fn ( ) ;
    // Write C++ code here
        std::cout <<"set of alphbet!";
    fn2 ( );
    std::cout <<"set of numbers!";
    fn3 ( );
   
    return 0;
}
