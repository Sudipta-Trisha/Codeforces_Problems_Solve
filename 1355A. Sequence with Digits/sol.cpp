
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : July 30, 2020 1:06 PM
 *    Problem Name  : A. Sequence with Digits
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1355/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

ll func(ll a)
{
    ll temp = a, maxx=0, mini=INT_MAX;
    while(a > 0){
        ll rem = a%10;
        a /= 10;
        maxx = max(maxx,rem);
        mini = min(mini,rem);
    }
    return (maxx*mini);
}

int main(){
    ios_base::sync_with_stdio(false);

    ll test;
    cin>>test;

    while(test--){
        ll a,k;
        cin >> a >> k;

        while(k>1){
            ll temp = func(a);
            if(temp == 0) 
                break;
            a = a + temp;
            k--;
        }

        cout << a << endl;
    }

    return 0 ;
}
