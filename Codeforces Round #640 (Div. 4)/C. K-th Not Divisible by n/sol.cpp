
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 19, 2020 2:48 PM
 *    Problem Name  : C. K-th Not Divisible by n
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1352/problem/C
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

        ll temp = (k-1) / (n-1);
        cout << k+temp << endl;
    }

    return 0 ;
}
