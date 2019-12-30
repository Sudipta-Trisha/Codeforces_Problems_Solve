#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        
        int len = s.length();
        
        if(s[len-1]=='o')
            cout<<"FILIPINO"<<endl;
        else if(s[len-1]=='u')
            cout<<"JAPANESE"<<endl;
        else if(s[len-1]=='a')
            cout<<"KOREAN"<<endl;
        len = 0;
    }
    return 0;
}
