#include <iostream>
using namespace std;

int getSum(int *p, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans += p[i];
    }
    return ans;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = getSum(arr, 10);
    cout << sum;
}