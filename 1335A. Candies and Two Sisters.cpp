#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
int main()
{
    int test;
    cin>>test;
    while(test--){
        ll n;
        cin>>n;
        ll ans;
        if(n%2==0) ans = (n/2)-1;
        else ans = floor(n/2);

         cout<<ans<<endl;
}
    }


