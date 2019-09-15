#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d\n",&n);
    char c[n];
    int arr[10] = {};
    
    for(int i=0; i<n; i++){
       scanf("%c",&c[i]);
       if(c[i]=='L'){
           for(int k=0; k<10; k++)
           {
               if(!arr[k]){
                   arr[k] = 1;
                   break;
               }
           }
       }
       
       if(c[i]=='R'){
           for(int k=9; k>=0; k--){
               if(!arr[k]){
                   arr[k] = 1;
                   break;
               }
           }
       }
       
       if(c[i]>='0' && c[i]<='9'){
           arr[c[i]-'0'] = 0;
       }
   }
   for(int i=0; i<10; i++){
       cout<<arr[i];
   }
   cout<<endl;
   return 0;
}
