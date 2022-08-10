#include<bits/stdc++.h>
using namespace std;

int main(){
  int n1;
  cout<<"Enter size of array-";
  cin>>n1;
  int nums[n1];
  for(int i=0; i<n1; i++){
    cin>>nums[i];
  }
  int n2=2*n1;
  int ans[n2];
  for(int i=0; i<n1; i++){
    ans[i]=nums[i];
  }
  for(int i=0; i<n1; i++){
    ans[i+n1]=nums[i];
  }
  cout<<"Concated array- ";
  for(int i=0; i<n2; i++){
    cout<<ans[i]<<"\t";
  }
}