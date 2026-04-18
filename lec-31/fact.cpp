#include<iostream>
using namespace std;

int factNum(int n){
    int ans = 1;

    if(n == 0 || n == 1){
        return 1;
    }

    ans =  n *ans ;
    factNum(n-1);

    return ans;
}

int main(){

   int fact =  factNum(5);
   cout<<fact;
}