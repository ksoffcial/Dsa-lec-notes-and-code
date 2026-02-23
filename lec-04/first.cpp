#include <iostream>
using namespace std;
int main()
{

    // for (char i = 'A'; i <= 'E'; i++)
    // {
    //     for (char j = 'A'; j <= i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // for (char i = 'A'; i <= 'E'; i++)
    // {
    //     for (char j = 'A'; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // Pattern 5: Pyramid

    // for(int j=4;j>=1;j--){
    //     for(int i=1; i<=j;i++){
    //         cout<<" ";
    //     }
    //     for(int i=1;i<=5-j;i++){
    //         cout<<"*";
    //     }
    //     for(int i=1;i<=5-j-1;i++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // Pattern 6: Inverted Pyramid
    // cout<<"final out put is here"<<endl;
    // for (int j = 5; j >= 1; j--)
    // {
    //     for (int i = 1; i <=5-j; i++)
    //     {
    //         cout << " ";
    //     }
    //     for (int i = 1; i <= j; i++)
    //     {
    //         cout << "*";
    //     }
    //     for (int i = 1; i <= j-1; i++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // cout << endl;

    // for (int i = 1; i <= 4; i++)
    // {
    //     cout << "*";
    // }
    // for (int i = 1; i <= 3; i++)
    // {
    //     cout << "*";
    // }

    // cout << endl;
    // for (int i = 1; i <= 2; i++)
    // {
    //     cout << " ";
    // }
    // for (int i = 1; i <= 3; i++)
    // {
    //     cout << "*";
    // }
    // for (int i = 1; i <= 2; i++)
    // {
    //     cout << "*";
    // }

    // cout << endl;

    // Binary Triangle

    // bool num = 1;
    // for (int i = 1; i <= 1; i++)
    // {

    //     cout << num;
    //     num = !num;
    // }

    // cout << endl;
    // num = 0;
    // for (int i = 1; i <= 2; i++)
    // {

    //     cout << num;
    //     num = !num;
    // }
    // cout << endl;
    // num = 1;
    // for (int i = 1; i <= 3; i++)
    // {

    //     cout << num;
    //     num = !num;
    // }

    for (int i = 1; i <= 5; i++)
    {
        bool num = i % 2;
        for (int j = 1; j <= i; j++)
        {
            cout << num;
            num = !num;
        }
        cout << endl;
    }

    // Pattern 14: Alphabet Triangle

    for (int i = 1; i <= 5; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    // Pattern 15: Alphabet Triangle (Repeated)
    char ch = 'A';
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }

    // Another method
    cout<<"sencond method :--"<<endl;
    for (char i = 'A'; i <= 'E'; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    cout<<endl;

    cout<<"sencond method :--"<<endl;
    for (char i = 'A'; i <= 'E'; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }


    // Pattern 16: Palindrome Number Triangle

    for(int i=4; i>=1; i--){
        for(int j=1;j<=i; j++){
            cout<<" ";
        }
        for(int j=1; j<=5-i;j++){
            cout<<j;
        }
        for(int j=5-i-1; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}