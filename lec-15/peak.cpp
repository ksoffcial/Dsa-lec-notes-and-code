#include<iostream>
using namespace std;      
int main(){
    int arr[9] = {3,7, 10,14,17,19,21,15,13};


    // int peak = 0;
    // for(int i=0; i<9; i++){
    //     if(arr[i]>arr[i+1]){
    //         peak = i;
    //         break;
    //     }
    // }

    int start = 0, end = 8;

    while(start<=end){
        int mid = start + (end - start)/2;

        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<mid;
            break;
        }
        else if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
    }

}