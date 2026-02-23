#include <iostream>
using namespace std;

int getFactorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;

    }

    return fact;
}

int main()
{
    int data = getFactorial(5);
    cout<<"Factorial is :- "<<data<<endl;
    return 0;
}