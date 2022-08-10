#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter the size of binary matrix- ";
  cin>>n;
  int nums[n][n];
  cout<<"Enter elements of matrix- \n";
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin>>nums[i][j];
    }
  }
  int temp;
  for(int i=0; i<n; i++){
    for(int j=0; j<n/2; j++){
      temp=nums[i][n-j-1];
      nums[i][n-j-1]=nums[i][j];
      nums[i][j]=temp;
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(nums[i][j]==1)
        nums[i][j]=0;
      else 
        nums[i][j]=1;
    }
  }
  cout<<"Output- \n";
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout<<nums[i][j]<<"\t";
    }
    cout<<"\n";
  }
}