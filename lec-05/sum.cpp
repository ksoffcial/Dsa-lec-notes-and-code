#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter number to get sum :- ";
    cin>>num;

    int ans = 0;
    while (num != 0)
    {
        int rem = num%10;
        ans=ans+rem;
        num=num/10;
    }

    cout<<ans;

    return 0;
    
}