#include<bits/stdc++.h>
using namespace std;
int main()
{
    int value ;
    cin>>value;
    int i;
    cin>>i;
    int n=value>>i;
    if((n&1)!=0)
    {
        cout<< "ith bit is set"<<endl;
    }
    else
    {
        cout<< "Not set"<<endl;
    }
}