#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll test;
    cin>>test;
    while(test--){
        ll n,k;
        cin>>n>>k;
        if(n<=1) cout<<k<<endl;
        else{
            n = n-1;
            ll ans = 10*n - (n-1);
            cout<<ans+k-1<<endl;
        }
    }
    return 0;
}
