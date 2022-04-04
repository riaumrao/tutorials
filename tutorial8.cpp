// Online C++ compiler to run C++ program online
#include <iostream>
#include <set>
bool fnprime (int N,int E)
{
    if (N%E == 0)
    {
        return false;
    }
    return true;
}
void fnprint ( std::set<int> &S )
{
    
  for (auto E : S)
    {
        std::cout << E  << " " << std :: endl;
  }
}

void fnprimegen(int n, std::set <int> & S)
{
    for (int i=2;i<=n; ++i)
    {
        for (auto E : S)
        {
            if (fnprime (i,E) == true )
            {
                S.insert(i);
            }
            
        }
    }
}
int main() 
{
    
    std::set <int> S = {2,3};
    fnprimegen (20,S);
    // Write C++ code here
    fnprint ( S );

    return 0;
}
