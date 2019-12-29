#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
        int h,m;
        cin>>h>>m;

        int ans = (h*60)+m;
        int result = 1440-ans;
        cout<<result<<endl;
    }
    return 0;
}
