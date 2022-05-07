#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout<<"Enter size of binary matrix ";
  cin>>n;
  int arr[n][n];
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      cout<<"Enter "<<j<<" term of "<<i<<" row ";
      cin>>arr[i-1][j-1];
    }
  }
  cout<<"The input matrix is- "<<endl;
  for(int i=0; i<n;i++){
    for(int j=0; j<n; j++){
     cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  int row=0 ,col=0;
  int state;
  state = 1;
  while (row<n && row>=0 && col<n && col>=0){
    switch (state){
      case 1:
      if(arr[row][col]==0){
        col=col+1;
      }
      else{
        row=row+1;
        state=2;
      }
      continue;
      case 2:
      if(arr[row][col]==0){
        row=row+1;
      }
      else{
        col=col-1;
        state=3;
      } 
      continue;
      case 3:
      if(arr[row][col]==0){
        col=col-1;
      }
      else{
        row=row-1;
        state=4;
      }
      continue;
      case 4:
      if(arr[row][col]==0){
        row=row-1;
      }
      else{
        col=col+1;
        state=1;
      }
      continue;
    }
  }
  if (row >= n) {
		row--;
	}
	if (col >= n) {
		col--;
	}
  cout<<"Index of exit point is "<<row<<" "<<col;
}
