#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int number_of_set_bits= __builtin_popcount(n);
    cout<< number_of_set_bits<<endl;
}