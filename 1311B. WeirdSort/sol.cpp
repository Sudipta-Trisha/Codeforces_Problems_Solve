
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 12, 2020 3:53 PM
 *    Problem Name  : B. WeirdSort
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1311/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int test;
    cin >> test;

    while(test--) {
        int n,m;
        cin >> n >> m;

        vector<int>a(n),p(m);

        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<m; i++) {
            cin >> p[i];
        }

        //sort(p.begin(),p.end());
        bool flag;
        while(true){
            flag = false;
            for(int i=0; i<n-1; i++) {
                    if(a[i] > a[i+1]){
                    flag = false;
                    for(auto x: p) {
                        if(x == i+1){
                           // continue;
                            swap(a[i],a[i+1]);
                            flag = true;
                            break;
                        }
                    }           
                }
            }
            if(flag == false)
                break;
        }
        flag = true;
        for(int i=0; i<n-1; i++){
            if(a[i] <= a[i+1]){
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag==true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
   
    return 0 ;
}
