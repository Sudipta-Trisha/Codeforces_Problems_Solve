#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    int test;
    cin>>test;
    
    while(test--)
    {
        ll n;
        cin>>n;
        
        set<int>myset;
        set<int>::iterator it;
        
        for(ll i=2; i*i<=n; i++){
            if(n%i==0 && !myset.count(i)){
                myset.insert(i);
                n/=i;
                break;
            }
        }
        
        for(ll i=2; i*i<=n; i++){
            if(n%i==0 && !myset.count(i)){
                myset.insert(i);
                n/=i;
                break;
            }
        }
        
        if(myset.size()<2 || n==1 || myset.count(n)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            myset.insert(n);
            for(it = myset.begin(); it!=myset.end(); it++){
                cout<<*it<<" ";
            }
            cout<<endl;
        }
    }
}
