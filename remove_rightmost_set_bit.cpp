#include<bits/stdc++.h>
using namespace std;

int remove_rightmost_set_bit(int n)
{
    return (n& (n-1));
}

int main()
{
    int n;
    cin>>n;
    int ans = remove_rightmost_set_bit(n);
    cout<<ans<<endl;
}
