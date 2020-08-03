
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 03, 2020 1:42 PM
 *    Problem Name  : A. LCM Problem
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1389/A
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
        ll l,r;
        cin >> l >> r;
        
        if(r < (l*2)){
            cout << "-1" << " " << "-1" << endl;
        }

        else cout << l << " " << l*2 << endl;    
    }

    return 0 ;
}
