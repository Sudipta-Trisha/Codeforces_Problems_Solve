
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : July 29, 2020 12:20 PM
 *    Problem Name  : A. Common Subsequence
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1382/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    
    int test;
    cin >> test;

    while(test--){
        int n,m;
        cin >> n >> m;

        int a[n+1], b[m+1];

        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<m; i++)
            cin >> b[i];

        bool flag = false;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i] == b[j]){
                    flag = true;
                    cout << "YES" << endl;
                    cout << "1" << " " << a[i] << endl;
                    break;
                }
            }
            if(flag == true)
                break;
        }
        if(flag == false)
            cout << "NO" << endl;
    }

    return 0 ;
}
