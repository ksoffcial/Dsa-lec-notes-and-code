#include<iostream>
using namespace std;

void printValue(int arr[],int index, int n){

    if(index==n){
        return;
    }
    printValue(arr,index+1,n);
    cout<<arr[index]<<endl;
    

}

int main(){
    int arr[10] = {1,2,4,5,68,8,9,3,7,23};
    printValue(arr,0,9);
}