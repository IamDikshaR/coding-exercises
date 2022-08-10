#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter half the size of array- ";
  cin>>n;
  int size=2*n;
  int nums[size];
  cout<<"Enter elements of array-";
  for(int i=0; i<size; i++){
    cin>>nums[i];
  }
  int ans[size]; 
  ans[0]=nums[0];
  int sub1=1;
  int sub2=1;
  for(int i=1; i<size; i++){
    if(i%2==0){
      ans[i]=nums[i-sub1];
      sub1+=1;
    }
    else{ 
      ans[i]=nums[n+i-sub2];
      sub2+=1;
    }
  }
  for(int i=0; i<size; i++){
    cout<<ans[i]<<"\t";
  }
}