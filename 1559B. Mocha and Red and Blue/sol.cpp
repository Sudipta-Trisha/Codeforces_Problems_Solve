
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : 23/08/2021 11:12:07
 *    Problem Name  : B. Mocha and Red and Blue
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1559/B
 *    @generated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve()
{
    ll len;
    cin >> len;

    string s;
    cin >> s;
    
    ll cnt = 0;
    for(ll i=0; i<len; i++) {
        if(s[i] == '?') cnt++;
    }

    if(len == 1 && cnt == 1) {
        cout << "B" << endl;
        return;
    }
    if(cnt == 0) {
        cout << s << endl;
        return;
    }
    if(cnt == len) {
        for(ll i=0; i<len; i++) {
            if(i%2==0) s[i] = 'B';
            else s[i] = 'R';
        }
        cout << s << endl;
        return;
    }

    ll temp = 0;
    while(temp < len) {
        if(s[temp] == '?') {
            if(temp-1 >= 0) {
                if(s[temp-1] == 'R') s[temp] = 'B';
                else if(s[temp-1] == 'B') s[temp] = 'R'; 
            }
        }
        temp++;
    }

    temp = len-1;
    while(temp >= 0) {
        if(s[temp] == '?') {
            if(temp+1 < len) {
                if(s[temp+1] == 'R') s[temp] = 'B';
                else if(s[temp+1] == 'B') s[temp] = 'R'; 
            }
        }
        temp--;
    }
    
    cout << s << endl;
}

int main(){
    ios_base::sync_with_stdio(false);

    ll test;
    cin >> test;

    while(test--) {
        solve();
    }

    return 0 ;
}
