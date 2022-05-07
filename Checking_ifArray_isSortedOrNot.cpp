#include<bits/stdc++.h>
using namespace std;

//Checking if an array is sorted or not
int main() {
  int n;
  cout<<"Enter number of elements to be in array ";
  cin>>n;
  int arr[n];
  for(int i=1; i<=n; i++){
    cout<<"Enter "<<i<<" term of array- ";
    cin>>arr[i-1];
  }
  bool d;
  d=arr[0]>arr[1];
  for(int i=1; i<n; i++){
    if((arr[i-1]>arr[i])!=d){
      cout<<"The array is not sorted";
      return 0;
    }
  }
  cout<<"The array is sorted";
} 