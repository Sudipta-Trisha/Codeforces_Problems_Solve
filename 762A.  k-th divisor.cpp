#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k,cnt=0;
    cin>>n>>k;
    vector<ll>div;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                div.push_back(i);
                cnt++;
            }
            else
            {
                div.push_back(i);
                div.push_back(n/i);
                cnt+=2;
            }
        }
    }
    sort(div.begin(),div.end());
//    for(int i=0; i<n; i++) cout<<div[i]<<" "<<endl;
//    cout<<"size = "<<div.size()<<endl;
//    cout<<"CNT= "<<cnt<<endl;
    if(cnt<k)
        cout<<"-1"<<endl;
    else
        cout<<div[k-1]<<endl;
    div.clear();
    return 0;
}
