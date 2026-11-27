#include<iostream>
using namespace std;

int main()
{
    int n = {};
    int k = {};
    int count = {};

    cin >> n >> k;

    int *arr = new int[n];

    // Input
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Counting
    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= arr[k-1] && arr[i] > 0)
        {
            count++;
        }
    }

    cout << count;

    delete[] arr;

    return 0;
}
