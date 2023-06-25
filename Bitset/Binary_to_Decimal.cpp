#include<bits/stdc++.h>
using namespace std;
int main()
{
    bitset<10>bset(string("100100"));
    int decimal_value = bset.to_ullong();
    cout<<decimal_value<<endl;
}