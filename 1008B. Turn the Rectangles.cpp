#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int rectangles()
{
    ll n;
    cin>>n;
    
    ll weight,height;
    
    vector<pair<int,int> >rect;
    for(int i=0; i<n; i++)
    {
        cin>>weight>>height;
        rect.push_back(make_pair(weight,height));
    }
    
    ll cnt = 0;
    cnt = max(rect[0].first,rect[0].second);
    
    for(int i=1; i<n; i++)
    {
        if(cnt>=max(rect[i].first,rect[i].second))
            cnt = max(rect[i].first,rect[i].second);
        else if(cnt>=min(rect[i].first,rect[i].second))
            cnt = min(rect[i].first,rect[i].second);
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    
}
 
int main()
{
    rectangles();
    return 0;
}
