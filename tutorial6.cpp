// Online C++ compiler to run C++ program online
#include <iostream>
# include <map>
void fn ( )
{
    std::map <int,std::string> M ;
    M[0]="dog";
    M[1]="cat";
    M[2]="rat";
  for (auto E : M)
    {
        std::cout << E.first<< " " << E.second <<std::endl;
            }
    
}
int main()  
{
     std::cout << "set of animals!" <<std::endl;
    fn ( ) ;
//write c++code here
reurn 0;
}
