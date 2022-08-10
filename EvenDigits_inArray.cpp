#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter size of array- ";
  cin>>n;
  int nums[n];
  cout<<"Enter elements of array-\n";
  for(int i=0; i<n; i++){
    cin>>nums[i];
  }
  int number=1;
  for(int i=0; i<n; i++){
    int counter=1;
    while(nums[i]>=10){
      number=nums[i]%10;
      nums[i]=nums[i]/10;
      counter+=1;
    }
    nums[i]=counter;
  }
  int counter=0;
  for(int i=0; i<n; i++){
    if(nums[i]%2==0)
      counter+=1;
  }
  cout<<"\nOutput "<<counter;
}