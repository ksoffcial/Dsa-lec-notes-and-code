#include <iostream>
using namespace std;

int sumarr(int arr[], int index, int n)
{
    if (index == n)
    {
        return 0;
    }

    int ans = arr[index] + sumarr(arr, index + 1, n);

    return ans;
}

int main()
{
    int arr[5] = {5, 7, 3, 9, 3};

    int result = sumarr(arr, 0, 5);
    cout << result;
}