#include<bits/stdc++.h>
using namespace std;


int toggle_the_ith_bit(int n,int i)
{
    return (n ^ (1<<i));
}
int main()
{
    int n,i;
    cin>>n>>i;
    int ans = toggle_the_ith_bit(n,i);
    cout<<ans<<endl;
}
