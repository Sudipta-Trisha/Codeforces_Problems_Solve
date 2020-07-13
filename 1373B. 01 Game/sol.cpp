
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : July 13, 2020 11:30 AM
 *    Problem Name  : B. 01 Game
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1373/B?mobile=false
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    ll test,cnt_zero=0, cnt_one=0;
    cin >> test;

    while(test--){
        cnt_one=0, cnt_zero=0;
        string s;
        cin >> s;

        for(ll i=0; i<s.length(); i++){
            if(s[i] == '0') cnt_zero++;
            else cnt_one++;
        }

        ll mini = min(cnt_one,cnt_zero);
        if(mini % 2 != 0)
            cout << "DA" << endl;
        else cout << "NET" << endl;
    }
    return 0 ;
}
