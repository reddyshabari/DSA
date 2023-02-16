#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void reverseArray(int arr[],int i, int j){
    if(i>=j)
    return;
   //swap(arr[i],arr[j]);
   
       int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
       reverseArray(arr,i+1,j-1);
    
    
}
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[8]={5,4,6,7,8,9};
    reverseArray(arr,0,5);
    print(arr,6);
    
}