#include<iostream>
using namespace std;
int main(){
    int num = 13;

    int ans = 0;
    while (num !=0)
    {
        int rem = num % 2;
         ans = ans*10 + rem;
        num = num /2;
    }

    cout<<ans<<endl;
    int finalAns = 0;

    while (ans != 0)
    {
        int rem = ans % 10;
        finalAns = finalAns*10 + rem;
        ans = ans/10;
    }
    cout<<finalAns;

    return 0;
    
}