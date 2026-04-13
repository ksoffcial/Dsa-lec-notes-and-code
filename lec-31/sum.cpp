#include<iostream>
using namespace std;

int sumOfNatural(int n){
    int ans = 0;

    if(n==0){
        return 0;
    }

    ans = n + sumOfNatural(n-1);

    return ans;
}

int main(){
   int sum =  sumOfNatural(20);
   cout<<sum;
}