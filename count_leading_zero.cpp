// count the leading zeros of the number
// clz = count leading zero
// it count the leading zero before the first occurence of set bits

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int leading_zero = __builtin_clz(n);
    cout<<leading_zero<<endl;
}