#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void oddOrEven(int);
int isPrime(int);


int main(){
  int n;
  cout<<"Enter a number- ";
  cin>>n;
  if(n<=1){
    cout<<"The number is neither prime nor composite";
    return 0;
  }
   else{
     oddOrEven(n);
     isPrime(n);
   }
  }

void oddOrEven(int n){
  if(n%2==0){
    cout<<"The number is even\n";
  }
  else{
    cout<<"The number is odd\n";
  }
}

int isPrime(int n){
  int x;
  for(int i=2; i<=n; i++){
    x=n%i;
    if(x==0){
      i==n?cout<<"The number is prime":cout<<" The number is not prime";
      return 0;
    }
  }
}