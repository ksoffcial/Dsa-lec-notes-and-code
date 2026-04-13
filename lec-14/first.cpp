#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {1, 2, 3, 3, 3, 3, 4, 5};
    int target = 3;

    int index = 0;
    int lastindex = 0;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] == target)
        {
            index = i;
            break;
        }
    }
   

    for (int i = index; i <8; i++){
        if(arr[i]>target){
            lastindex = i-1;
            break;
        }
    }

    cout<<index<<" "<<lastindex<<endl;
}