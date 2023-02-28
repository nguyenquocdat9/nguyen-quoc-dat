#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr1[n + 1];
    int arr2[n + 1];
    for(int i = 0;i < n;i++)
    {
        cin >> arr1[i];
    }
    arr1[n] = 0;
    for(int i = 0;i <= n;i++)
    {
        cin >> arr2[i];
    }
    for(int i = 0;i < n;i++)
    {
        for(int j = i + 1;j < n;j++)
        {
            if(arr1[i] > arr1[j])
            {
                int tmp = arr1[i];
                arr1[j] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
    for(int i = 0;i <= n;i++)
    {
        for(int j = 0;j <= n;j++)
        {
            if(arr2[i] > arr2[j])
            {
                int tmp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = tmp;
            }
        }
    }
    for(int i = 0;i <= n;i++)
    {
        if(arr1[i] != arr2[i])
        {
            cout << arr2[i] << endl;
            return 0;
        }
    }
}
