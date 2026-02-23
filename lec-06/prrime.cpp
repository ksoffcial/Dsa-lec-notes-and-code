#include<iostream>
using namespace std;

void findPrime(int n){
    if(n<2){
        cout<<"Not a prime number"<<endl;
        return ;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"not a prime number"<<endl;
            return ;
        }
    }

    cout<<"this is the prime number"<<endl;
}

int main(){
    findPrime(17);
}