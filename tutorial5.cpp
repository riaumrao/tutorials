// Online C++ compiler to run C++ program online
#include <iostream>
bool fnprime (int N,int E)
{
    if (N%E == 0)
    {
        return false;
    }
    return true;
}
int main() {
bool x = fnprime (3,2);
    // Write C++ code here
    std :: cout << "remainder!"<< x;

    return 0;
}
