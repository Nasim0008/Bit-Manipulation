#include<bits/stdc++.h>
using namespace std;
string decimal_to_binary(int n)
{
    string s = "";
    while(true)
    {
        if(n<=1)
        {
            if(n==0)
            {
                s+='0';
            }
            else
            {
                s+='1';
            }
            break;
        }
        if(n%2==0)
        {
            s+='0';
        }
        else
        {
            s+='1';
        }
        n/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
    int n;
    cin>>n;

    string s = decimal_to_binary(n);
    cout<<s<<endl;


}
