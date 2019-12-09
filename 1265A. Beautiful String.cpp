#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        string s;
        bool flag = false;
        cin>>s;
        int len = s.length();
        for(int i=1; i<len-1; i++){
            if(s[i]=='?'){
                if(s[i-1]=='a' && s[i+1]=='a') s[i] = 'b';
                else if(s[i-1]=='b' && s[i+1]=='b') s[i] = 'c';
                else if(s[i-1]=='c' && s[i+1]=='c') s[i] = 'a';
                else if(s[i-1]!='a' && s[i+1]!='a') s[i] = 'a';
                else if(s[i-1]!='b' && s[i+1]!='b') s[i] = 'b';
                else if(s[i-1]!='c' && s[i+1]!='c') s[i] = 'c';
            }
        }
        if(s[0]=='?' && len>1){
            if(s[1]!='a') s[0] = 'a';
            else if(s[1]!='b') s[0] = 'b';
            else if(s[1]!='c') s[0] = 'c';
        }
        if(s[0]=='?' && len==1) s[0] = 'a';
        if(len>1 && s[len-1]=='?'){
            for(int i=0; i<len; i++){
                if(s[len-2]!='a') s[len-1] = 'a';
                else if (s[len-2]!='b') s[len-1] = 'b';
                else if(s[len-2]!='c') s[len-1] = 'c';
            }
        }
        for(int i=0; i<len-1; i++){
            if(s[i]==s[i+1]){
                flag = true;
               // break;
            }
        }
        if(flag==true) cout<<"-1"<<endl;
        else cout<<s<<endl;

    }
    return 0;
}

