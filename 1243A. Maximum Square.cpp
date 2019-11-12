#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
        int n ;
        cin>>n;
        vector<int>len(n);
        for(int i=0; i<n; i++){
            cin>>len[i];
        }
        int cnt=1,i;
        sort(len.begin(),len.end(),greater<int>());
        for(i=0; i<n; i++){
            if(len[i]<(i+1)){
                cout<<i<<endl;
                cnt = 0;
                break;
            }

        }
        if(cnt==1) cout<<i<<endl;

    }
    return 0;
}

