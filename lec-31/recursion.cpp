// #include<iostream>
// using namespace std;

// int  printSum(int n){
    
//     if(n==0){
//         return 0;
//     }
     
//     return n+printSum(n-1);
// }

// int main(){
//     int sum =printSum(20);
//     cout<<sum;
// }


int printSum(int n){
    if(n==0){
        return 0;
    }
    int sumAns = 0;
    sumAns =  n + printSum(n-1);
    return sumAns;

}



#include<iostream>
using namespace std;
int main(){

   int sum = printSum(20);
   cout<<"Answer is here :- " <<sum;
}