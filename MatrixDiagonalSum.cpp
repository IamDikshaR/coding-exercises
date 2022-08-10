#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter size of square matrix- ";
  cin>>n;
  int mat[n][n];
  cout<<"Enter elements of matrix-\n";
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin>>mat[i][j];
    }
  }
  int sum=0;
  for(int i=0; i<n; i++){
    if((n-i-1)!=i)
     sum=sum + mat[i][i] + mat[i][n-i-1];
    else
      sum=sum+mat[i][i];
  }
  cout<<"Output- "<<sum;
}