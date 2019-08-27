#include<bits/stdc++.h>
using namespace std;

void reg()
{
     int n;
    cin>>n;
    map<string,int>m;
    map<string,int>::iterator it;

    for(int i=1; i<=n ;i++)
    {
        string s;
        cin>>s;

        if(m[s]==0)
            cout<<"OK"<<endl;
        else
            cout<<s<<m[s]<<endl;

        m[s]++;
    }
}
int main()
{
    reg();
    return 0;
}
