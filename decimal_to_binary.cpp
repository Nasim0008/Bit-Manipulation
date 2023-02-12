#include<bits/stdc++.h>
using namespace std;
void decimal_to_binary(int n)
{
    int cnt =0;
    vector<int>binary;
    while(n>0)
    {
        cnt+=(n%2);
        binary.push_back(n%2);
        n/=2;
    }
   // reverse(binary.begin(),binary.end());
//    for(auto u:binary)
//    {
//        cout<<u;
//    }
//    cout<<endl;

    cout<<cnt<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        decimal_to_binary(n);
    }


}
