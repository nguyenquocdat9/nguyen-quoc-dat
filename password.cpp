#include <iostream>
using namespace std;
bool check(string a, string b)
{
    int n = a.length();
    int m = b.length();
    if(m != n) return false;
    int i = 0, j = n - 1;
    while(i < j)
    {
        if(a[i] != b[j]) return false;
        i++;
        j--;
    }
    return true;
}
string find(int n, string arr[])
{
    for(int i = 0;i < n;i++)
    {
        for(int j = i + 1;j < n;j++)
        {
            if(check(arr[i], arr[j])) return arr[i];
        }
    }
}
int main()
{
    int n;
    cin >> n;
    string pass[n];
    for(int i = 0;i < n;i++)
    {
        cin >> pass[i];
    }
    string word = find(n, pass);
    int a = word.length();
    int b = a / 2;
    cout << a << " " << word[b] << endl;
    return 0;
}
