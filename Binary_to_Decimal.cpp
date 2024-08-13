#include<bits/stdc++.h>
using namespace std;

int binary_to_decimal(string s)
{
    int num =0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
        {
            num+=(1<<(s.size()-i-1));
        }
    }
    return num;
}
int main()
{
    string s;
    cin>>s;
    int num = binary_to_decimal(s);
    cout<<num<<endl;
}
