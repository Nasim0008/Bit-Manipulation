// check the number of set bits is odd or even
// parity two types : 1.odd parity and 2.even
//if the numbers of set bits is odd then it is odd parity 
// if the numbers of set bits is even then it is even parity
// odd parity return 1 and even parity return 0
#include<bits/stdc++.h>
using namespace std;
int parity(int n)
{
    return __builtin_parity(n);
}
int main()
{
    int n;
    cin>>n;
    if(parity(n)==1)
    {
        cout<< "Odd parity"<<endl;
    }
    else
    {
        cout<< "Even parity"<<endl;
    }
}