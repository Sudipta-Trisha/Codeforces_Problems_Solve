#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,sz,msg;
    cin>>n>>sz;
    list<ll>l;
    list<ll>::iterator it;
    map<ll,ll>mp;
    for(ll i=0; i<n; i++){
       cin>>msg;
       if(mp[msg]==0){
         l.push_front(msg);
         mp[msg] = 1;
         if(l.size()>sz){
            it = l.end(), it--;
            mp[*it] = 0;
            l.pop_back();
         }
       }
    }
    cout<<l.size()<<endl;
    for(it = l.begin(); it!=l.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}

