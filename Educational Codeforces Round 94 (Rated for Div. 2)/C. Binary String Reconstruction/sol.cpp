
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 25, 2020 8:37 PM
 *    Problem Name  : C. Binary String Reconstruction
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1400/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int test;
    cin >> test;

    while(test--){
        string s;
        cin >> s;

        ll x;
        cin >> x;

        ll sz = s.size();

        string w(sz,'1');

        for(ll i=0; i<sz; i++){
            if(s[i] == '0'){
                if(i-x >= 0) w[i-x] = '0';
                if((i+x) <  sz) w[i+x] = '0';
            }
        }

        //string temp = w;
        bool flag = true;

        for(ll i=0; i<sz; i++){
            if(s[i] == '1'){
                if((i-x)>=0 && w[i-x] == '1' || ((i+x) < sz && w[i+x] == '1')){
                    flag = true;
                }
                else {
                    flag = false;
                    break;
                }
            }
        }

        if(flag == true) cout << w << endl;
        else cout << "-1" << endl;
    }

    return 0 ;
}
