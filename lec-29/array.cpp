#include<iostream>
using namespace std;
int main(){

    int arr[5] = {5,7,8,9,11};

    for(int i=0;i<5;i++){
        cout<<arr+i<<endl;
    }

    for(int i=0; i<5;i++){
        cout<<*(arr+i)<<endl;
    }

    int *p = arr;

    for(int i=0; i<5; i++){
        cout<<p[i]<<endl;
    }


    return 0;
}