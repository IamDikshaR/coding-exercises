#include<bits/stdc++.h>
using namespace std;

//second largest and second smallest number in an array
int main(){  
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
  cout<<"Largest nmber is "<<largest <<endl<<"Smallest number is " <<smallest<<endl;
  int secondLargest=arr[0];
  int secondSmallest=arr[0];
  for(int i=0; i<n; i++){
    if (arr[i]>=secondLargest){
      int temp = secondLargest;
      secondLargest=arr[i];
      if(secondLargest== largest){
        secondLargest = temp;
      }
    }
    else if (arr[i]<=secondSmallest){
          int temp = secondSmallest;
          secondSmallest=arr[i];
          if(secondSmallest== smallest){
              secondSmallest = temp;
          }
      }
  }
  cout<<"Second largest number is "<<secondLargest<<endl<<"Second smallest number is "<<secondSmallest;
}