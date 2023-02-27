#include <iostream>
using namespace std;
bool check(int b)
{
    string a = to_string(b
                         );
    int n = a.length();
    int i = 0, j = n - 1;
    while(i < j)
    {
        if(a[i] != a[j]) return false;
        i++;
        j--;
    }
    return true;
}
int num(int a, int b)
{
    int times = 0;
    for(int i = a;i <= b;i++)
    {
        if(check(i))
        {
            times++;
        }
    }
    return times;
}
int main()
{
    int n;
    cin >> n;
    int testcase[n][2];
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < 2;j++)
        {
            cin >> testcase[i][j];
        }
    }
    for(int i = 0;i < n;i++)
    {
        cout << num(testcase[i][0], testcase[i][1]) << endl;
    }
}
