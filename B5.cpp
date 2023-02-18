
#include <iostream>
using namespace std;
int main()
{
    int n, a = 1;
    cin >> n;
    int mang1[n];
    for(int i = 0;i < n;i++)
    {
        mang1[i] = a;
        cout << mang1[i] << " ";
        a++;
    }
    cout << endl;
    for(int i = 1;i < n;i++)
    {
        for(int j = i;j < n;j++)
        {
            cout << mang1[j] << " ";
        }
        for(int k = 0;k < i;k++)
        {
            cout << mang1[k] << " ";
        }
        cout << endl;
    }
}
