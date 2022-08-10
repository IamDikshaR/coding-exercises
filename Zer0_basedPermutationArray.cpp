 #include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter size of zero-permutation array-";
  cin>>n;
  int nums[n];
  for(int i=0; i<n; i++){
    cin>>nums[i];
  }
  int ans[n];
  for(int i=0; i<n; i++){
    ans[i]=nums[nums[i]];
  }
  for(int i=0; i<n; i++){
    cout<<ans[i]<<"\t";
  }
}
