#include<bits/stdc++.h>
using namespace std;

int fibo[50];
int main()
{
   fibo[0] = 0;
   fibo[1] = 1;

   for(int i=2; i<=50; i++){
    fibo[i] = fibo[i-2] + fibo[i-1];
   }

   int n;
   cin>>n;
   bool flag = false;
   for(int i=0; 2*fibo[i]<=n; i++){
        int temp = fibo[i];
        if(binary_search(fibo,fibo+50,n-temp)){
            flag = true;
            cout<<"0 "<<temp<<" "<<n-temp<<endl;
            break;
        }
    }
    if(!flag){
        cout<<"I'm too stupid to solve this problem"<<endl;
    }
    return 0;
}
