#include<bits/stdc++.h>
using namespace std;
int main()
{
    bitset<8>bset(100);
    cout<<bset<<endl;

    string binary = bset.to_string();
    cout<<binary<<endl;
}