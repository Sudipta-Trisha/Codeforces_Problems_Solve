
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 05, 2020 5:56 PM
 *    Problem Name  : D. Decrease the Sum of Digits
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1409/problem/D
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

ll cal(ll n)
{
    ll sum = 0;
    while(n>0) {
        sum = sum + (n%10);
        n /= 10;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    
    ll test;
    cin >> test;
    while(test--) {
        ll n,s;
        cin >> n >> s;

        ll sum = cal(n);

        if(sum <= s){
            cout << "0" << endl;
        }

        else {
            ll temp=0,ans;
            for(ll i=1; ; i = i*10) {
                temp = ((n/i)+1)*i;
                ll sum = cal(temp);
                if(sum <= s) {
                    ans = temp - n;
                    cout << ans << endl;
                    break;
                }
            }
        }
    }
    return 0 ;
}
