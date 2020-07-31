
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : July 30, 2020 8:35 PM
 *    Problem Name  : A. Captain Flint and Crew Recruitment
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1388/problem/0
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    ll test;
    cin>> test;
    ll p[6] = {6,10,14,15,21,22};
    while(test--){
        ll n;
        cin >> n;
        if(n < 31){
          cout << "NO" << endl;
        }

        else if(n == 36){
            cout << "YES" << endl;
            cout << "6 10 15 5" << endl;
        }

        else if(n == 40){
            cout << "YES" << endl;
            cout << "6 10 15 9" << endl;
        }

        else if(n == 44){
            cout << "YES" << endl;
            cout << "6 7 10 21" << endl;
        }

        else{
         cout << "YES" << endl;
         for(ll i=0; i<3 && n>0; i++){
                if(n != p[i]*2){
                    n = n - p[i];
                    cout << p[i] << " ";
                }
                else{
                    n = n - p[i+1];
                    cout << p[i+1] << " ";
                }
            }
            cout << n << endl;
        }
    }
    return 0 ;
}
