
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 05, 2020 12:44 AM
 *    Problem Name  : C. Yet Another Array Restoration
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1409/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    ll test;
    cin >> test;

    while(test--) {
        ll n, x, y;
        cin >> n >> x >> y;

        vector<ll>a(n),b(n);
        b[n-1] = 1e9+5;

        for(ll i=0; i<n; i++) {
            for(ll j=i+1; j<n; j++) {
                a[i]= x, a[j] = y;
                ll dif = y-x;
                ll temp = j-i;
                if(dif%temp == 0) {
                    dif = dif / temp;
                    for(ll t=i-1; t>=0; t--) {
                        a[t] = a[t+1] - dif;
                    }
                    for(ll t=i+1; t<n; t++) {
                        a[t] = a[t-1] + dif;
                    }
                    if(a[0] > 0 && (b[n-1] > a[n-1])){
                        b = a;
                     }

                }
               
            }
        }

        for(auto x: b) cout << x << " ";
        cout << endl;
    }

    return 0 ;
}
