#include<bits/stdc++.h>
using namespace std;

bool check_power_of_two(int n)
{
    return ((n & (n-1))==0);
}
int main()
{
    int n;
    cin>>n;
    bool flag = check_power_of_two(n);
    if(flag)
    {
        cout<< "YES"<<endl;
    }
    else
    {
        cout<< "NO"<<endl;
    }
}
