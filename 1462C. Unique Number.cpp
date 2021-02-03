#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;
        vector<int>v;

        int temp = 0, last_digit=9;

        while( n>temp && last_digit>0 ){
            int ans = min((n-temp),last_digit);
            v.push_back(ans);
            temp += last_digit;
            last_digit--;
        }

        if( temp < n) cout << "-1" << endl;
        else{
            reverse(v.begin(),v.end());
            for(auto x: v){
                cout << x;
            }
            cout << endl;
        }
    }
    return 0;
}
