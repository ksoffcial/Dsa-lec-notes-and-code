#include <iostream>
using namespace std;
int main()
{
    int num = 153;
    int adjectNum = num;

    int ans = 0;
    while (num != 0)
    {
        int rem = num % 10;
        ans = ans + rem * rem * rem;
        num = num / 10;
    }
    cout << ans << endl;

    if(ans == adjectNum){
        cout<<"Its is amstorng number ";
    }
    else{
        cout<<"it is not an amstrong number";
    }

    return 0;
}