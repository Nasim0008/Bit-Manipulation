#include<bits/stdc++.h>
using namespace std;
int main()
{
    bitset<10>bset;// all the 10 bits are 0
    cout<<bset<<endl;

    bitset<8>bbset(100);// convert the decimel to binary 
    cout<<bbset<<endl;

    bitset<10>bbbset(string("100010000"));// store the binary string
    cout<<bbbset<<endl;
}