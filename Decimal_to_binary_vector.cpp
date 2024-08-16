#include<bits/stdc++.h>
using namespace std;
vector<int>decimal_to_binary(int n)
{
    vector<int>v;
    while(true)
    {
        if(n<=1)
        {
            if(n==0)
            {
                v.push_back(0);
            }
            else
            {
                v.push_back(1);
            }
            break;
        }
        if(n%2==0)
        {
            v.push_back(0);
        }
        else
        {
            v.push_back(1);
        }
        n/=2;
    }
    reverse(v.begin(),v.end());
    return v;
}
int main()
{
    int n;
    cin>>n;

    vector<int>v = decimal_to_binary(n);
    for(auto u:v)
    {
        cout<<u<< " ";
    }
    cout<<endl;


}
