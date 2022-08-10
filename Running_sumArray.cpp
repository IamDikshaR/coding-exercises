#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter size of array-";
  cin>>n;
  int nums[n];
  for(int i=0; i<n; i++){
    cin>>nums[i];
  }
  int ans[n];
  int sum=0;
  for(int i=0; i<n; i++){
    ans[i]=sum+nums[i];
    sum=ans[i];
  }
  cout<<"Running Sum array- ";
  for(int i=0; i<n; i++){
    cout<<ans[i]<<"\t";
  }
}