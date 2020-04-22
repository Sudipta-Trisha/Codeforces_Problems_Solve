#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll lcm(ll a,ll b)
{
    return ((a*b)/__gcd(a,b));
}

int main()
{
    ll x;
    cin>>x;
    ll res;
    for(ll i=1; i*i<=x; i++){
        if((x%i==0) && lcm(i,x/i)==x)
            res = i;
    }

    cout<<res<<" "<<x/res<<endl;
    return 0;
}
