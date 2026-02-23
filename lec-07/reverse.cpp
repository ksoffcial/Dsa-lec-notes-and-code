#include<iostream>
using namespace std;

int main(){

    int arr[5]={30,50,60,80,15};

    int reverseArr[5];
    int index =0;
    for(int i=4; i>=0;i--){
        reverseArr[index] = arr[i];
        index++;
    }

    // now printing the new array

    for(int i=0; i<5;i++){
        cout<<reverseArr[i]<<" ";
    }
}