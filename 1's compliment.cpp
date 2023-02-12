// 1's compliment is 1=>0 and 0=>1
// zero converted to the one and one converted to the zero

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<< __builtin_popcount(n)<<endl;
}
