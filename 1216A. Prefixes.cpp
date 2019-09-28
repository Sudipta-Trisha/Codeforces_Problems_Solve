#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    
    ll cnt=0;
    
    for(int i=0; i<n; i+=2){
        if(s[i]==s[i+1]){
            s[i] = char(1-int(s[i])+2*int('a'));
            cnt++;
        }
    }
    cout<<cnt<<endl<<s<<endl;
    return 0;
}
