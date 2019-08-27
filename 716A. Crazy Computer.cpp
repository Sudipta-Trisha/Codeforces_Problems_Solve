#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void word()
{
        ll n,c,cnt=1;
        cin>>n>>c;

        vector<ll>v(n);
        for(int i=0; i<n ;i++)
        {
            cin>>v[i];
        }
        for(int i=0; i<v.size()-1; i++)
        {
            if((v[i+1]-v[i]) > c)
                cnt=1;
            else
                cnt++;
        }
        cout<<cnt<<endl;

}
int main()
{
    word();
    return 0;
}
