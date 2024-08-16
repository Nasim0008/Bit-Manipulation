#include<bits/stdc++.h>
using namespace std;
int count_the_bits(int n)
{
    int total_number_of_bits = (int)log2(n)+1;
     return total_number_of_bits;
}
int main()
{
    int n;
    cin>>n;

    cout<<count_the_bits(n) <<endl;
}
