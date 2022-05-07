#include<bits/stdc++.h>
using namespace std;

 int main() {
  int n;
  cout<<"Enter size of square matrix ";
  cin>>n;
  int arr[n][n];
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      cout<<"Enter "<<j<<" term of "<<i<<" row- ";
      cin>>arr[i-1][j-1];
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(i<=j){
        cout<<arr[i][j]<<" ";
      }
    }
    cout<<endl;
  }
}