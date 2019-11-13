#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n,m;
    cin>>n>>m;

    int arr[6]={};
    long long int cnt=0;
    for(int i=1; i<=n; i++){
        arr[i%5]++;
    }
    for(int i=1; i<=m; i++){
        cnt = cnt + arr[(i%5==0?0:5-(i%5))];
    }
    cout<<cnt<<endl;
    return 0;
}
