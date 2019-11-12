#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int test;
    cin>>test;
    while(test--)
    {
        int n,cnt=0,j=-1;
        cin>>n;
        int arr[n+10];
        string s,t;
        cin>>s>>t;
        for(int i=0; i<n; i++)
        {
            if(s[i]!=t[i])
            {
                cnt++;
                arr[++j] = i;

            }
        }
            if(cnt!=2)
                cout<<"No"<<endl;
            else
            {
                bool chk=true;
                for(int i=0; i<2; i++)
                {
                    swap(s[arr[i]],t[arr[0]]);
                    if(s==t)
                    {
                        cout<<"Yes"<<endl;
                        chk=false;
                        break;
                    }
                    else
                    {
                        swap(s[arr[i]],t[arr[0]]);
                    }
                }
                if(chk==true)
                    cout<<"No"<<endl;
            }
    }
    return 0;
}
