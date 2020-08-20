
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 19, 2020 2:48 PM
 *    Problem Name  : B. Same Parity Summands
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1352/problem/B
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
        ll n,k;
        cin >> n >> k;

        if((n-k)==1 && n<k){
            cout << "NO" << endl;
        }
        else{
            ll temp1 = n - 2*(k-1);
            ll temp = n - (k-1);

            if(temp1%2==0 && temp1>=1){
                cout << "YES" << endl;
                for(ll i=1; i<k; i++){
                    cout << "2" << " ";
                }
                cout << temp1 << endl;
            }
            
            else if(temp%2 != 0 && temp >=1 ){
                cout << "YES" << endl;
                for(ll i=1; i<k; i++) cout << "1" << " ";
                cout << temp << endl;
            }

            else
                cout << "NO" << endl;
        }
    }
    return 0 ;
}
