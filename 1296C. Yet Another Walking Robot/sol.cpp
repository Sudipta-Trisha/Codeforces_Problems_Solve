
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 01, 2020 9:30 PM
 *    Problem Name  : C. Yet Another Walking Robot
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1296/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    int test;
    cin >> test;

    while(test--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        map<pii,int>mp;
        pii cnt={0,0};
        mp[cnt] = 0;
        int l = -1, r = n;
        
        for(int i=0; i<n; i++) {
            if(s[i] == 'L') cnt.first--;
            if(s[i] == 'R') cnt.first++;
            if(s[i] == 'U') cnt.second++;
            if(s[i] == 'D') cnt.second--;

            if(mp.count(cnt) == 1) {
                if((i - mp[cnt] +1) < (r -l +1)) {
                    l = mp[cnt]+1;
                    r = i+1;
                }
            }

            mp[cnt] = i+1;
        }

        if(l != -1) cout << l << " " << r << endl;
        else cout << "-1" << endl;

    }

    return 0 ;
}
