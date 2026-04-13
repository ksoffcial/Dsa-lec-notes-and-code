#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {2,3,5,8,9,10,15};

    int target = 2;

    int start = 0; 
    int end = 6;

    while(start<=end){
        int mid = (start + end)/2;

        if(arr[mid] == target){
            cout<<mid;
            return 0;
        }
        else if (target>arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid -1 ;
        }
        
    }
}