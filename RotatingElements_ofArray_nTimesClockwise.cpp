#include<bits/stdc++.h>
using namespace std;

int main(){
    int size, n;
    cout<<"Enter size of array- ";
    cin>>size;
    int arr[size];
    for(int i=1; i<=size; i++){
        cout<<"Enter "<<i<<" term of array- ";
        cin>>arr[i-1];
    }
    cout<<"Enter number of time the elements are to be rotated- ";
    cin>>n;
    for(int i=1; i<=n; i++){
        int temp=arr[0];
        arr[0]=arr[size-1];
        for(int j=1; j<size; j++){
            temp = temp+arr[j];
            arr[j]= temp-arr[j];
            temp= temp-arr[j]; 
        }
    }
    cout<<"The rotated array is-\n ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}