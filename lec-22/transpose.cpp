#include<iostream>
using namespace std;
int main(){
    int arr[4][4] = {{1,2,3,4},{4,5,6,7},{7,8,9,9}};

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i<j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }

    // to print the array

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
 
    }
    cout<<endl;
}