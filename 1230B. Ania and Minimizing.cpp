#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    
    string s;
    cin>>s;
    
    if(k==0){
        cout<<s<<endl;
        return 0;
    }
    else if(n==1){
        cout<<"0"<<endl;
        return 0;
    }
    else{
        for(ll i=0; i<n && i<k; i++){
            if(i==0){
                if(s[i]=='1'){
                    k++;
                    continue;
                }
                else
                    s[i] = '1';
            }
            else{
                if(s[i]=='0')
                    k++;
                else
                    s[i] = '0';
            }
            
        }
        cout<<s<<endl;
    }
    return 0;
}
