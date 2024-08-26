#include<bits/stdc++.h>
using namespace std;

int count_set_bit(int n)
{
    return __builtin_popcount(n);
}
int main()
{
    int n;
    cin>>n;
    int ans = count_set_bit(n);
    cout<<ans<<endl;
}
