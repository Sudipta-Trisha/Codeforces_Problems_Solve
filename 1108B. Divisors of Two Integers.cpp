#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    multiset<ll>s;
    for(ll i=0; i<n; i++){
        ll a;
        cin>>a;
        s.insert(a);
    }
    ll a = *prev(s.end());
    for(ll i=1; i<=a; i++){
        if(a%i==0){
            s.erase(s.find(i));
        }
    }
    cout<<a<<" "<<*prev(s.end());

    return 0;

}
