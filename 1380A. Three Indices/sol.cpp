
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : July 29, 2020 5:29 PM
 *    Problem Name  : A. Three Indices
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1380/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;

        int arr[n+1];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        bool flag = false;

        for(int i=0,j=1,k=2; i<n && j<n && k<n; i++,j++,k++){
            if(arr[i] < arr[j] && arr[j]>arr[k]){
                flag = true;
                cout << "YES" << endl;
                cout << i+1 << " " << j+1 << " " << k+1 << endl;
                break;
            }
        }

        if(flag == false){
            cout << "NO" << endl;
        }
    }

    return 0 ;
}
