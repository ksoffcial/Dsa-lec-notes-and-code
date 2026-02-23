#include<iostream>
using namespace std;
int main(){

    // find the number present in array or not 

    int num[5]={10,40, 70,80,55};

    int present = 55;

    for(int i=1;i<5;i++){
        if(present == num[i]){
            cout<<"yes number is present "<<endl;
            return 0;
        }
    }

    cout<<"Not Present"<<endl;


    // how find the highest mark in this marks array
    // int marks[5]={70,80,90,60,55};

    // int high = 0;

    // for(int i=1; i<5;i++){
    //     if(high<marks[i]){
    //         high = marks[i];
    //     }
    // }

    // cout<<high;

    return 0;
}