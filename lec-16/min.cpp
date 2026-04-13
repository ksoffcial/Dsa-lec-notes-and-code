#include<iostream>
using namespace std;
int main(){
    int arr[6] ={7,8,9,3,4,5};

    int small = 0;

    for(int i=0; i<6; i++){
        if(arr[i]<arr[small]){
            small = i;
        }
    }


    cout<<small;
}