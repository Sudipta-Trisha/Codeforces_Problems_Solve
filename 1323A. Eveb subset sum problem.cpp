#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test;
  cin>>test;
  
  while(test--)
  {
    int n;
    cin>>n;
    
    int arr[n];
    vector<int>even;
    vector<int>odd;
    
    for(int i=0; i<n; i++){
      cin>>arr[i];
      if(arr[i]%2==0){
        even.push_back(i+1);
      }
      else {
        odd.push_back(i+1);
      }
    }
    
    if(even.size()>0){
      cout<<"1"<<"\n"<<even[0]<<endl;
    }
    else if(even.size()==0){
      if(odd.size()>1){
        cout<<"2"<<"\n"<<odd[0]<<" "<<odd[1]<<endl;
      }
      else if(odd.size()==1){
        cout<<"-1"<<endl;
      }
    }
  }
  
  return 0;
}
