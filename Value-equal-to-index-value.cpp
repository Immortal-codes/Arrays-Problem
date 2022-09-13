#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

    int arr[6] = {15, 2, 45, 12, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == arr[i + 1])
        {
            int k = 0;
            k = arr[i];
            cout << k;
        }
    }
}
