#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin>>test;
    while(test--){
        int a,b;
        cin>>a>>b;
        if(__gcd(a,b)!=1){
            cout<<"Infinite"<<endl;
        }
        else
            cout<<"Finite"<<endl;
    }
    return 0;
}
