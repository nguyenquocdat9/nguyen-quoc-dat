#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mang[n];
    for(int i = 0;i < n;i++) cin >> mang[i];
    for(int i = 0;i < n;i++)
    {
        for(int j = i + 1;j < n;j++)
        {
            if(mang[i] == mang[j])
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
