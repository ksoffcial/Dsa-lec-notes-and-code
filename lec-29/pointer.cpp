#include<iostream>
using namespace std;
int main(){

    int a = 10;
    int *ptr = &a;

    // ptr is a pointer which points to the interger adresss

    cout<<a<<endl;
    // value of a

    cout<<&a<<endl;
    // Adress of a

    cout<<ptr<<endl;
    // Adress of a

    cout<<&ptr<<endl;
    // Adress of ptr

    return 0;
}