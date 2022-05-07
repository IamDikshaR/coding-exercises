#include<bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cout<<"Enter number of elements to be in array ";
  cin>>n;
  int arr[n];
  for(int i=1; i<=n; i++){
    cout<<"Enter "<<i<<" term of array- ";
    cin>>arr[i-1];
  }
  int largest, smallest;
  largest=arr[0];
  smallest=arr[0];
  for(int i=0; i<n; i++){
    if( largest<arr[i]){
      largest=arr[i];
    }
    else if( smallest>arr[i]){
      smallest=arr[i];
    }
  }
  cout<<"Largest number in array is "<<largest<<endl;
  cout<<"Smallest number in array is "<<smallest<<endl;
} 


