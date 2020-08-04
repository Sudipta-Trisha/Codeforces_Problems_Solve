
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 04, 2020 2:11 PM
 *    Problem Name  : A. Magical Sticks
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1371/problem/A
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
        ll n;
        cin >> n;

        if(n%2==0 ){
            cout << n/2 << endl;
        }

        else{
            cout << (n/2)+1 << endl;
        }
    }

    return 0 ;
}
