/*
    1^2^3^4^.........^(n-1)^n ==?
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = n % 4;
    if (ans == 0)
    {
        cout << n << endl;
    }
    else if (ans == 1)
    {
        cout << "1" << endl;
    }
    else if (ans == 2)
    {
        cout << (n + 1) << endl;
    }
    else if (ans == 3)
    {
        cout << "0" << endl;
    }
}