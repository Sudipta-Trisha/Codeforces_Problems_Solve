
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 19, 2020 2:48 PM
 *    Problem Name  : D. Alice, Bob and Candies
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1352/problem/D
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
        ll n;
        cin >> n;

        ll arr[n+1];
        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }
       
        ll left = 0, right = n-1;
        ll total_move = 0, alice = 0, bob = 0, keep_a = 0, keep_b = 0;
        bool flag1 = true, flag2= false;

        while(left <= right){
            if(flag1 == true){
                keep_a = 0;

                while(left<=right && keep_a <= keep_b){
                    keep_a += arr[left];
                    alice += arr[left];
                    left++;
                }

                flag1 = false, flag2 = true;
            }
            else{
                keep_b = 0;

                while(left <= right && keep_b <= keep_a){
                    keep_b += arr[right];
                    bob += arr[right];
                    right--;
                }

                flag1 = true, flag2 = false;
            }

            total_move++;
        }   
        cout << total_move << " " << alice << " " << bob << endl;
    }

    return 0 ;
}
