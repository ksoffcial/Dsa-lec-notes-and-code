#include<iostream>
using namespace std;
int main(){

    int arr[5] = {50,55,20,9,80};

    int minNum = arr[0];

    for(int i=2; i<5; i++){
        if(minNum > arr[i]){
            minNum = arr[i];
        }
    }

    cout<<"Minumum number of the array :-  "<<minNum;

    return 0;
}