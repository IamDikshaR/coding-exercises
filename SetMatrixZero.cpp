#include<bits/stdc++.h>
using namespace std;

int main(){
  int m,n;
  cout<<"Enter number of rows- ";
  cin>>m;
  cout<<"Enter number of columns- ";
  cin>>n;
  int nums[m][n];
  cout<<"Enter elements of matrix- \n";
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++)
      cin>>nums[i][j];
  }
  int ans[m][n];
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      ans[i][j]=nums[i][j];
    }
  }
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      if(nums[i][j]==0){
        int k=i, l;
        for(l=0; l<n; l++)
          ans[k][l]=0;
        l=j;
        for(k=0; k<m; k++)
          ans[k][l]=0;
      }
    } 
  }
  cout<<"Final matrix is-\n";
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++)
      cout<<ans[i][j]<<"\t";
    cout<<"\n";
  }
}