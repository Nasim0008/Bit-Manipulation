#include<bits/stdc++.h>
using namespace std;
int main()
{
    bitset<8>bset(100);
    cout<<bset<<endl;
    
    cout<<bset.size()<<endl;

    for(int i=0;i<bset.size();i++)
    {
        cout<<bset[i]<< " ";
    }
    cout<<endl;
}