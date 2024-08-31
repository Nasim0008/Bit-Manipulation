#include<bits/stdc++.h>
using namespace std;

int  xor_operation(int n)
{
    int rem = n%4;
    if(rem==0)
    {
        return n;
    }
    if(rem==1)
    {
        return 1;
    }
    if(rem==2)
    {
        return n+1;
    }

    if(rem==3)
    {
        return 0;
    }

}
int main()
{
    int l,r;
    cin>>l>>r;
    int ans = xor_operation(l)^xor_operation(r);
    cout<<ans<<endl;
}
