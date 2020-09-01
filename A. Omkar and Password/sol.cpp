
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 31, 2020 12:16 PM
 *    Problem Name  : A. Omkar and Password
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1392/problem/A
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

        ll arr[n+1];
        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }
        
        ll cnt=1;
        for( ll i=0; i<n-1; i++ ) {
            if(arr[i] == arr[i+1]) cnt++;
        }

        if( cnt == n ) cout << n << endl;
        else cout << "1" << endl;
            
    }

    return 0 ;
}
