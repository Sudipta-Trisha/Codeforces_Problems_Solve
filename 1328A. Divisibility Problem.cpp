#include<bits/stdc++.h>
using namespace std;
#define sz 1000000000
#define ll long long int

int main()
{
    ll test;
    cin>>test;
    while(test--){
        ll a,b;
        cin>>a>>b;
        ll ans=0;
        if(a%b==0)
                ans = 0;
        else{
                ans = b - a%b;
            }
        cout<<ans<<endl;
    }
    return 0;
}
