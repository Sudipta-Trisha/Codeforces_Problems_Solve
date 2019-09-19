#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin>>len;
    
    string s;
    cin>>s;
    
    int one=0, zero=0;
    for(int i=0; i<len; i++){
        if(s[i]=='n')
            one++;
        if(s[i]=='z')
            zero++;
    }
    
    while(one--){
        cout<<"1"<<" ";
    }
    while(zero--){
        cout<<"0"<<" ";
    }
    cout<<endl;
    return 0;
}
