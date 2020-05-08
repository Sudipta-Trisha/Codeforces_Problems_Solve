#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--){
        ll row,col;
        cin>>row>>col;
        
        if(row>col) swap(row,col);
        if(col>=3 and row>1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
