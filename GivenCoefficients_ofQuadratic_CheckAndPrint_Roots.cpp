#include<bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c;
  cout<<"Enter coefficients of x2, x and constant term respectively ";
  cin>>a>>b>>c;
 int d, root, root1 , root2;
  d= pow(b,2)-(4*a*c);
  if( d>0){
    root1= (-b+ sqrt(d))/(2*a);
    root2= (-b- sqrt(d))/(2*a);
    cout<<"This equation has 2 roots "<<root1<<" and "<<root2;
  }
  else if(d==0){
    root=(-b)/(2*a);
    cout<<"This equation has one root "<<root; 
  }
  else{
    cout<<"-1";
  }
}
