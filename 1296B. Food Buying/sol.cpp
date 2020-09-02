
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 01, 2020 9:30 PM
 *    Problem Name  : B. Food Buying
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1296/problem/B
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
        ll s, total=0;
        cin >> s;

        if(s < 10) cout << s << endl;
        else {
            total = 0;
            ll rem = s, temp = s;

            while(temp > 9) {
               // total ++;
                s = temp / 10;
                total += (s*10);
                rem = temp % 10;
                temp = s+rem;
            }

            cout << total+temp << endl;
        }
    }
    return 0 ;
}
