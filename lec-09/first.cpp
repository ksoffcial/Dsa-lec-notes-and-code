#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {12, 35, 1, 10, 34, 1};

    int largest = arr[0];

    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > arr[0])
        {
            largest = arr[i];
        }
    }

    cout<<largest<<endl;

    int second = -1;
    for(int j=0; j<6;j++){
        if(largest == arr[j]){
            continue;
        }
        else if(arr[j]>second){
           second = arr[j];
        }
    }
    cout<<second;

    return 0;
}