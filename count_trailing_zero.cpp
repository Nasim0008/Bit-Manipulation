// count the trailing zeros of the number
// ctz = count trailing zero
// it count the trailing zero from the last to first occurence of set bits

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int trailing_zero = __builtin_ctz(n);
    cout<<trailing_zero<<endl;
}