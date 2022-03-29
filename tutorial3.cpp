// Online C++ compiler to run C++ program online
#include <iostream>
 void fn (int min,int max)
  {
        for (int x= min ;x<= max ; ++x)
          {
               std::cout <<  x <<"   "<< std ::endl;
          }
              }
int main() 
{
    fn(2,5);
    std::cout << "print range between 10 -15" << std::endl;
     fn(10,15);
     std::cout << "print range between 1-110" << std::endl;
     fn(27,83);
               // Write C++ code here
        return 0;
}
