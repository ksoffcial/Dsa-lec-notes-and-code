#include <iostream>
using namespace std;
int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int target = 6;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                cout<<arr[i][j];
            }
        }
    }
}