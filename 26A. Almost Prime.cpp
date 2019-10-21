#include<bits/stdc++.h>
using namespace std;
bool arr[100000+30];

void sieve()
{
   arr[0] = 1;
   arr[1] = 1;

   for(int i=2; i<=5000; i++){
    if(arr[i]==0 && i*i<=5000)
    {
        for(int j=i*i; j<=5000; j+=i){
            arr[j]= 1;
        }
    }
   }
}

int main()
{
    sieve();
    int n;
    cin>>n;
    int cnt,total=0;
    for(int i=6; i<=(n); i++){
        cnt=0;
       for(int j=2; j<=sqrt(i); j++){
        if(i%j==0 && arr[j]==0){
            cnt++;
        }
        if(i%(i/j)==0 && arr[i/j]==0 && (j*j)!=i){
            cnt++;
        }
       }
       if(cnt==2)
        total++;
    }
    cout<<total<<endl;
    return 0;
}

