// Online C++ compiler to run C++ program online
#include <iostream>
# include <map>
void fn2 ( )
{
    std:: map <std::string,std::string > F ; 
    F["a"]="apple";
    F["b"]="badminton";
    F["c"]="chocolate";
    F["d"]="donke";
    F["e"]="elephant";
    for (auto E : F)
    {
        std::cout << E.first << "  " << E.second <<std :: endl;
    }
}

int main()  
{
std::cout << "ste of words!" <<std::endl;
    fn2 ( );
   //write c++code here
    return 0;
}
