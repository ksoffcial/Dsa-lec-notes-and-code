#include <iostream>
using namespace std;
int main()
{

    int num = 5;
    int a = 0, b = 1;
    int ans = 0;
    for (int i = 1; i < num; i++)
    {
        ans = ans + b;
        a=b;
        b=a+b;
    }
    cout<<ans;
}