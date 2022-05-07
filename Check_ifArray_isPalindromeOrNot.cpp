#include<bits/stdc++.h>
using namespace std;

//Checking if an array is palindrome or not
int main() {
  int n;
  cout<<"Enter number of elements in array ";
  cin>>n;
  int arr[n];
  for(int i=1; i<=n; i++){
    cout<<"Enter "<<i<<" term of array";
    cin>>arr[i-1];
  }
  for(int i=0; i<n; i++){
    if(arr[i]!=arr[n-i-1]){
      cout<<"The array is not a palindrome";
      return 0;
    }
  }
  cout<<"The array is a palindrome";
}
