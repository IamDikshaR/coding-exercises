#include<bits/stdc++.h>
using namespace std;

int main() {
  int n,x,y;
  cout<<"Enter number digits ";
  cin>>n;
  cout<<"Enter the number- ";
  cin>>x;
  y=x;
  int arr[n];
  for(int i=0; i<n; i++){
    arr[i]=x%10;
    x=x/10;
  }
  int a;
  a=0;
  for(int i=0; i<n; i++){
    a= a+pow(arr[i],n);
  }
  if (a==y){
    cout<<"The number is armstrong's number";
  }
  else {
    cout<<"The number is not armstrong's number";
  } 
} 
