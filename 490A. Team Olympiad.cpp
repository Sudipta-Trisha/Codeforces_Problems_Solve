#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    
    vector<int>pro,math,phyE;
    int p=0, m=0, pe=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]==1) p++;
        else if(v[i]==2) m++;
        else if(v[i]==3) pe++;
    }
    
    int mini = min(p,min(m,pe));
    cout<<mini<<endl;
    
    for(int i=0; i<n; i++){
        if(v[i]==1)
            pro.push_back(i+1);
        else if(v[i]==2)
            math.push_back(i+1);
        else if(v[i]==3)
            phyE.push_back(i+1);
    }
    
    for(int i=0; i<mini; i++){
        cout<<pro[i]<<" "<<math[i]<<" "<<phyE[i]<<endl;
    }
    
    return 0;
}
