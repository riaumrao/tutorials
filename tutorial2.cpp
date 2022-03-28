// Online C++ compiler to run C++ program online
#include <iostream>
float fn(float m,float n)
{
    float r1 = (m+n)/(m-n);
    float r2 = m/n;
    return r1 * r2;
}
int main()
{
    float y = fn (3,2);
    // Write C++ code here
    std::cout << "multiplication result "<<y << std::endl;
    
    
    y=fn( 2,3);
    
     std::cout << "multiplication result "<<y << std::endl;
     
     y= fn(0,2);
    
    std::cout << "multiplication result "<<y << std::endl;
    
    y= fn(2,0);
}
    
