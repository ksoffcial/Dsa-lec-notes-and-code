#include<iostream>
using namespace std;
int main(){
    int *p = new int[10];
    // Array create kar skte hai

    for(int i=0; i<10; i++){
        p[i] = i*4;
    }


    for(int i=0; i<10; i++){
        cout<<p[i]<<endl;
    }

    delete[] p;
}