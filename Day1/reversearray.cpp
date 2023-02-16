#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void reverse(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
       swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
}
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[8]={5,4,6,7,8,9};
    reverse(arr,6);
    print(arr,6);
    
}