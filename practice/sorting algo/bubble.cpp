#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 34, 2, 9, 1};

    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 5-j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}