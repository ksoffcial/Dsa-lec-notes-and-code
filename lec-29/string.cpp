#include<iostream>
using namespace std;
int main(){
    char arr[5] = {'a','b','c','d','e'};

    char *ptr = arr;

    cout<<(void*)ptr;


    return 0;
}