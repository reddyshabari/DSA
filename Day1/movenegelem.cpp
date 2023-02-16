#include<iostream>
using namespace std;

void movelements(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
        if(i!=j)
               swap(arr[i],arr[j]);
               j++; 
        
        }
        

    }
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}
int main(){
    int arr[]={-8,-5,3,56,87,-90,-3,-2};
    int n=sizeof(arr)/sizeof(arr[0]);
    movelements(arr,n);
    return 0;
}