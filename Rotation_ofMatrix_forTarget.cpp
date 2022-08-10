#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter size of binary matrices-";
  cin>>n;
  int mat[n][n], target[n][n];
  cout<<"Enter elements of the matrix-\n";
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin>>mat[i][j];
    }
  }
  cout<<"Enter elements of target matrix-\n";
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin>>target[i][j];
    }
  }
  //90 degree rotation of mat
  int check
  [n][n];
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      check[i][j]=mat[n-j-1][i];
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(check[i][j]!=target[i][j])
        goto rotate1;
    }
  }
  cout<<"true";
  return 0;
  rotate1: //180 degree rotation
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      check[i][j]=mat[n-i-1][n-j-1];
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(check[i][j]!=target[i][j])
        goto rotate2;
    }
  }
  cout<<"true";
  return 0;
  rotate2:  //270 degree rotation
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      check[i][j]=mat[j][n-i-1];
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(check[i][j]!=target[i][j]){
        cout<<"false";
        return 0;
      }
    }
  }
  cout<<"true";
}