#include<bits/stdc++.h>
using namespace std;

int clear_the_ith_bit(int n,int i)
{
    return ((n) & (~(1<<i)));
}


int main()
{
    int n, i;
    cin>>n>>i;
    int ans = clear_the_ith_bit(n,i);
    cout<<ans<<endl;
}
