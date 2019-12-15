#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(ll a,ll b)
{
        if(a==0 || b==0)
        {
            cout<<a<<" "<<b<<endl;
            return ;
        }
        if(a>=2*b)
            a=a%(2*b);
        else if(b>=2*a)
            b=b%(2*a);
        else
        {
            cout<<a<<" "<<b<<endl;
            return ;
        }
        solve(a,b);
}
int main()
{
    ll a,b;
    while(cin>>a>>b)
    {
        solve(a,b);
        return 0;
    }
}
