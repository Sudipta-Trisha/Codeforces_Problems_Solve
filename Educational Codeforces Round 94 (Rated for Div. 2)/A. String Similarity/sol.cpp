
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 25, 2020 8:37 PM
 *    Problem Name  : A. String Similarity
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1400/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int test;
    cin >> test;

    while(test--){
        //clr();
        int n , one=0 ,zero = 0;
        cin >> n;

        string s;
        cin >> s;

        string new_s = "";

        for(int i=0; i<s.length(); i+=2){
               new_s += s[i];
        }

        cout << new_s << endl;
    }

    return 0 ;
}
