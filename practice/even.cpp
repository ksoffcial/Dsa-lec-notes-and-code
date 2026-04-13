#include <iostream>
using namespace std;
int main()
{

    // int num = 10;
    // int sum =0;
    // for (int i = 0; i < 11; i++)
    // {
    //     sum += i;
    // }

    // cout<<sum;

    // for(int i=2; i<=num; i++){
    //     if(i%2==0){
    //         cout<<i<<endl;
    //     }
    // }

    // for(int i=1;i<=5;i++){
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }

    // for(int i=1; i<=5; i++){
    //     for(int j=1; j<=5-i; j++){
    //         cout<<" ";
    //     }

    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }

    //     for(int j=1; j<=i-1; j++){
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }

    // for(int i=5; i>=1; i--){

    //     for(int j=1; j<=5-i; j++){
    //         cout<<" ";
    //     }

    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }

    //     for(int j=1; j<=i-1; j++){
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }

    // hallow pattern

    for (int j = 1; j <= 5; j++)
    {
        cout << "*";
    }

    cout << endl;
    for (int k = 1; k <= 3; k++)
    {
        for (int j = 1; j <= 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 3; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 1; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
    for (int j = 1; j <= 5; j++)
    {
        cout << "*";
    }

    return 0;
}