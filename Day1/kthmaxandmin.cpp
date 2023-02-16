#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void kthmaxmin(int arr[],int i, int j,int k,int n){
    
    sort(arr,arr+n);
  cout<<arr[i]<<endl;
      cout<<"largest "<<k<< " element is "<<arr[n-k]<<endl;
  

      cout<<"smallest "<<k<< " element is "<<arr[k-1]<<endl;

    
    
}
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[6]={7, 10, 4, 3, 20, 15};
  
    kthmaxmin(arr,0,5,4,6);
      print(arr,6);
    
    
}