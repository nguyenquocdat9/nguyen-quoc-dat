#include <iostream>
using namespace std;
int summ(int arr[], int start, int endd)
{
    int sum = 0;
    for(int i = start;i < endd;i++)
    {
        sum += arr[i];
    }
    return sum;
}
bool check(int arr[],int n)
{
    for(int i = 0;i < n;i++)
    {
        if(summ(arr, 0, i) == summ(arr, i + 1, n))
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
