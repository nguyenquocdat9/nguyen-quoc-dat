#include <iostream>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int n = a.length();
    int i = 0, j = n - 1;
    while(i <= j)
    {
        if(a[i] != a[j])
        {
            cout << "No" << endl;
            return 0;
        }
        i++;
        j--;
    }
    cout << "Yes" << endl;
    return 0;
}
