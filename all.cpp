#include<bits/stdc++.h>
using namespace std;
int main()
{
    bitset<4>bset(15);
    cout<<bset<<endl;

    bool flag = bset.all();
    if(flag == true)
    {
        cout<< "There is all the bit is set"<<endl;
    }
    else
    {
        cout<< "There is not all the bit is set bit"<<endl;
    }
}