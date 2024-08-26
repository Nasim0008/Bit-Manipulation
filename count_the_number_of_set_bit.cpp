#include<bits/stdc++.h>
using namespace std;

int count_the_number_of_set_bit(int n)
{
    int cnt=0;
    while(true)
    {
        if(n==0)
        {
            break;
        }
        if(n&1)
        {
            cnt++;
        }
        n>>=1;
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    int ans = count_the_number_of_set_bit(n);
    cout<<ans<<endl;
}
