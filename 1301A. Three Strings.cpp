#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    bool flag = false;
    while(test--){
        string a,b,c;
        cin>>a>>b>>c;
        for(int i=0; i<a.size(); i++)
        {
            if(c[i]!=a[i]) swap(c[i],a[i]);
            else if (c[i]!=b[i]) swap(c[i],b[i]);
        }
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                flag = true;
            }
            else {
                flag = false;
                break;
            }
        }
        if(flag == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
