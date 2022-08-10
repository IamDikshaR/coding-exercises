#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter number of integers-";
  cin>>n;
  int arr[n];
  if(n%2==0){
    for(int i=0; i<n/2; i++)
      arr[i]=-((n/2)-i);
    for(int i=0; i<n/2; i++)
      arr[(n/2)+i]=(n/2)-i;
    for(int i=0; i<n; i++)
     cout<<arr[i]<<"\t";
  }
  else{
    for(int i=0; i<n/2; i++)
      arr[i]=-((n/2)-i);
    for(int i=0; i<=n/2; i++)
      arr[(n/2)+i]=(n/2)-i;
    for(int i=0; i<n; i++)
     cout<<arr[i]<<"\t";
  }
}