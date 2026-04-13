#include<iostream>
using namespace std;
int main(){

    int arr[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int spiral[5] ;
    int colStart = 0, colEnd = 4, rowStart = 0 , rowEnd = 4;

    while(colStart<=colEnd && rowStart<=rowEnd){

        for(int i=colStart; i<=colEnd; i++){
            spiral[i] = arr[rowStart][i];
        }
        rowStart++;

        for(int i = rowStart; i<=rowEnd; i++){
            spiral[i] = arr[i][colEnd];
        }
        colEnd--;

        for(int i=colEnd; i>=colStart; i--){
            spiral[i] = arr[rowEnd][i];
        }
        rowEnd--;

        for(int i=rowEnd; i>=rowStart; i++){
            spiral[i]=arr[i][colStart];
        }
        colStart++;
    }

    for(int i=0; i<5; i++){
        cout<<spiral[i]<<" ";
    }
}