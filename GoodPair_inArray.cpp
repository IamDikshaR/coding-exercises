#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter number of elements in array- ";
  cin>>n;
  int nums[n];
  cout<<"Enter elements of array- \n";
  for(int i=0; i<n; i++){
    cin>>nums[i];
  }
  cout<<"\n";
  int output=0;
  cout<<"Good pairs- \n";
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(nums[i]==nums[j]&&i<j){
        cout<<"("<<i<<", "<<j<<")\t";
        output+=1;
      }
    }
  }
  cout<<"\n"<<output;
}