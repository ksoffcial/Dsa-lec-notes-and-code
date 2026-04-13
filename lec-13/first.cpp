#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 18, 5, 9, 4};

    for (int j = 5; j > 0; j--)
    {
        for (int i = 0; i < j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}