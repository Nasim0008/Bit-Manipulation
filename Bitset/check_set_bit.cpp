#include<bits/stdc++.h>
using namespace std;
int main()
{
    bitset<8>bset(100);
    cout<<bset<<endl;
    int i;
    cin>>i;
    if(bset[i]==1)
    {
        cout<< "set bit"<<endl;
    }
    else
    {
        cout<< "Not set Bit"<<endl;
    }
}