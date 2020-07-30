
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : July 30, 2020 12:56 PM
 *    Problem Name  : B. Young Explorers
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1355/B
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

        ll arr[n+1], cnt=0, total=0;

        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr,arr+n);

        for(ll i=0; i<n; i++){
            cnt++;
            if(cnt >= arr[i]){
                total++;
                cnt=0;
            }
        }

        cout << total << endl;
    }

    return 0 ;
}
