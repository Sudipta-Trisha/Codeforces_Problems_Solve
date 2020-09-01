
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 31, 2020 1:35 PM
 *    Problem Name  : C. Omkar and Waterslide
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1392/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    ll test;
    cin >> test;

    while(test--){
        ll n;
        cin >> n;

        vector<ll>v(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];
        }
        ll ans = 0;

        for(ll i=0; i<n-1; i++) {
            ll temp = v[i] - v[i+1];
            ans = ans + max(0LL,temp);
        }
         
        cout << ans << endl;
    }
    return 0 ;
}
