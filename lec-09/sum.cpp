#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,4,2,3};

    int sum = 0 ;
    for(int i=0; i<5; i++){
        bool found = false;
        for(int j=0; j<5; j++){
            if(i==j){
                continue;
            }
            else if(arr[i]==arr[j]){
                found = true;
                break;
            }
        }
        if(found == false){
            sum = sum + arr[i];
        }
    }

    cout<<sum;
}