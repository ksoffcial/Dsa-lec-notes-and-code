#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter the number :- ";
    cin >> num;
    int ans = 1;
    for (int i = num; i >= 1; i--)
    {
        ans = ans * i;
    }
    cout << ans;
    return 0;
}