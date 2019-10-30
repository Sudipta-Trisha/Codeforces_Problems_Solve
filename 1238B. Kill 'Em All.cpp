#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    set<int>l;
    set<int>::iterator it;
    int test;
    cin>>test;
    while(test--){
        int n,r,x;
        cin>>n>>r;
        int cnt=0;
        while(n--)cin>>x,l.insert(x);
        
        while(1){
            it=l.end();
            it--;
            
            if(cnt>=*it) break;
            
            else{
                cnt+=r;
                l.erase(it);
                if(l.empty()) break;
                
            }
            
            
        }
        cout<<cnt/r<<endl;
        l.clear();
    }
    return 0;
    
}
