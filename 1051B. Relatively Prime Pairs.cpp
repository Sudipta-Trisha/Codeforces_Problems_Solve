#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll l,r;
    cin>>l>>r;
    ll temp = (r-l+1)/2;
    if(temp>0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    for(ll i=0; i<=temp-1; i++){
        if(__gcd(i, i+1)==1){
            cout<<l+(i*2)<<" "<<l+(i*2)+1<<endl;
        }
    }
    return 0;
}
