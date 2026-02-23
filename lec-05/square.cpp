#include<iostream>
using namespace std;
int main(){
    int num = 80;

    if(num == 0){
        cout<<"0";
        return 0;
    }

    int ans =1;
    for(int i=1; i*i<=num; i++){
        ans = i;
    }

    cout<<ans;

    return 0;
}