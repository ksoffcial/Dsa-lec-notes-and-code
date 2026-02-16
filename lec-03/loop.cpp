#include <iostream>
using namespace std;
int main()
{

    // 1.1: Print Even Numbers
    // for (int i = 2; i <= 20; i++)
    // {
    //     cout << i << endl;
    // }

    // 2: Sum of First 10 Numbers
    // int sum = 0;
    // for (int i = 1; i <= 10; i++)
    // {
    //     sum = sum + i;
    // }

    // 3 Multiplication Table
    // int num;
    // cout << "Enter the number to get table" << endl;
    // cin >> num;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << num * i << endl;
    // }

    // 4 Reverse Counting
    // for(int i=10; i>=1;i--){
    //     cout<<i<<endl;
    // }

    // nested loop

    // Square Pattern

    // for (int j = 1; j <= 5; j++)
    // {
    //     for (int i = 1; i <= 5; i++)
    //     {
    //         cout << i << " ";
    //     }

    //     cout<<endl;
    // }

    // for(int i=1;i<=5;i++){
    //     for(char j='a';j<='e';j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // Print 5x5 square of stars
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=5;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // 2: Right Triangle (Increasing)

    // for (int j = 1; j <= 5; j++)
    // {
    //     for (int i = 1; i <= j; i++)
    //     {
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }

    // Right Triangle (Decreasing)

    // for(int i=5; i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // Inverted Right Triangle
    // for (int j = 1; j <= 5; j++)
    // {
    //     for (int i = 1; i <= 5-j; i++)
    //     {
    //         cout << " ";
    //     }
    //     for (int i = 1; i <= j; i++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    int num = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

    return 0;
}