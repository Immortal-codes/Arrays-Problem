#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {111, 222, 333, 444, 555};
    int m;

    for (int i = 0; i < 5; i++)
    {
        int temp = 0;
        int num = arr[i];
        while (num > 0)
        {
            int rem = num % 10;
            temp = temp * 10 + rem;
            num = num / 10;
        }
        if (temp != arr[i])
        {
            cout<<"No";
        }
        else{
            cout<<"yes";
        }
    }
    return 0;
}