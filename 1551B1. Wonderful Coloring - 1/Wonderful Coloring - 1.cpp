#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve()
{
    string s;
    cin >> s;
    
    map<char,ll>mp;
    for(ll i=0; i<s.length(); i++){
        mp[s[i]]++;
    }
    
    ll cnt1=0, cnt2 = 0;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        if(it->second > 1) cnt1++;
        else if(it->second == 1) cnt2 ++;
    }
    
    cout << cnt1 + (cnt2/2) << endl;
}

int main()
{
    ll test;
    cin >> test;
    while(test--){
        solve();
    }
}