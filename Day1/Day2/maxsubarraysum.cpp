#include<iostream>
#include<climits>
using namespace std;

void maxsubarray(int arr[],int n){
    int tmax=0,start=0,end=0,s=0;
    int currmax=INT_MIN;
    for(int i=0;i<n;i++){
        tmax=tmax+arr[i];
        if(currmax<tmax){
            currmax= tmax;
            start=s;
            end=i;

        }
        if(tmax<0){
            tmax=0;
            s=i+1;
        }
    }
    cout<<tmax<<endl;
    cout<<start<<endl;
    cout<<end<<endl;
}

int main(){
    int arr[]={3,67,87,45,34,-1,-3,-4,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxsubarray(arr, n);
}