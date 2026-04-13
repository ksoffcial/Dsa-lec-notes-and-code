#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {20, 18, 10, 6, 4, 2};

    for (int k = 1; k < 6; k++)
    {
        for (int i = k; i > 0; i--)
        {
            if (arr[i] < arr[i - 1])
            {
                swap(arr[i], arr[i - 1]);
            }
        }
    }

        for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}