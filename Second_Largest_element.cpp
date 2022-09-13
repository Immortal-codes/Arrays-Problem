#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);
    for (int i = 0; i < n; ++i)
    {
        
        cout<<arr[i]<<" "<<endl;
        
    }
    int k=0;
        k=arr[n-3];
        cout<<k<<endl;
   

    return 0;
}