#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        int sum1=0, sum2=0;

        vector<int>a(n);
        vector<int>b(n);

        for(int i=0; i<n; i++){
            cin>>a[i];
            sum1+=a[i];
        }

         for(int i=0; i<n; i++){
            cin>>b[i];
        }

            sort(a.begin(),a.end());
            sort(b.begin(), b.end(), greater<int>());

            for(int i=0,j=0; i<k; i++,j++){
                if(a[i]<b[j]) swap(a[i],b[j]);
            }

            int sum3=0;
            for(int i=0; i<n; i++){
                sum3+=a[i];
           }

            if(sum1>=sum3) cout<<sum1<<endl;
            else cout<<sum3<<endl;
    }
}
