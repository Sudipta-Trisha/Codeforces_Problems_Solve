
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 01, 2020 9:30 PM
 *    Problem Name  : A. Array with Odd Sum
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1296/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    
    int test;
    cin >> test;

    while(test--) {
        int n,sum=0,odd=0,even=0;
        cin >> n;

        int arr[n+1];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            if(arr[i] % 2 !=0) odd++;
            else even++;
        }

        if((odd%2==0 && even==0) || (even==n)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0 ;
}
