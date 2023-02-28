#include <iostream>
using namespace std;
int sumleft(int arr[], int n, int x)
{
    int sum = 0;
    for(int i = 0;i < x;i++)
    {
        sum += arr[i];
    }
    return sum;
}
int sumright(int arr[], int n, int x)
{
    int sum = 0;
    for(int i = x + 1;i < n;i++)
    {
        sum += arr[i];
    }
    return sum;
}
bool check(int arr[],int n)
{
    for(int i = 0;i < n;i++)
    {
        if(sumleft(arr, n, arr[i]) == sumright(arr, n, arr[i]))
        {
            return true;
        }
    }
    return false;
}
string gettest()
{
    int n;
    cin >> n;
    int mang[n];
    for(int i = 0;i < n;i++)
    {
        cin >> mang[i];
    }
    string a;
    if(check(mang, n))
    {
        a = "YES";
    }
    else a = "NO";
    return a;
}
int main()
{
    int testcase;
    cin >> testcase;
    string out[testcase];
    for(int i = 0;i < testcase;i++)
    {
        out[i] = gettest();
    }
    for(int i = 0;i < testcase;i++)
    {
        cout << out[i] << endl;
    }
}
