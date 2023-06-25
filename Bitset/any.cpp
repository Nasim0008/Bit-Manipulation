#include<bits/stdc++.h>
using namespace std;
int main()
{
    bitset<8>bset(100);
    cout<<bset<<endl;

    bool flag = bset.any();
    if(flag == true)
    {
        cout<< "There is at least one bit is set"<<endl;
    }
    else
    {
        cout<< "There is no set bit"<<endl;
    }
}