#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n == 2)
    {
        cout << "Prime" << endl;
        return 0;
    }
    for(int i = 2;i <= sqrt(n);i++)
    {
        if(n % i == 0)
        {
            cout << "nonPrime" << endl;
            return 0;
        }
    }
    cout << "Prime" << endl;
    return 0;
}

