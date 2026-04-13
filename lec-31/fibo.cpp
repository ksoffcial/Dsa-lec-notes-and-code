#include<iostream>
using namespace std;

int fibbonaci(int n){
    int a = 0, b = 1 , next = 0;

    if(n>=n+1){
        return 0;
    }

    next = a + b;
    a = b;
    b= next;


    return next;

}

int main(){

   int result = fibbonaci(5);
   cout<<result;
}