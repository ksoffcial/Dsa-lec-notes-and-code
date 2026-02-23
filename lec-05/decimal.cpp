#include <iostream>
using namespace std;
int main()
{
    int num = 1101;

    int ans = 0;
    int mul = 1;
    while (num != 0)
    {
        int rem = num % 10;
        ans = ans + rem *mul;
        num = num/10;
       
        mul= mul*2;
      
    }

    cout << ans;
    return 0;
}