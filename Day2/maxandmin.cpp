#include <bits/stdc++.h>
#include<iostream>
#include <math.h>
using namespace std;
int maxmin(int arr[],int n)
{
    int max=0,min=0;
    if(n==1){
        max=arr[0];
        min=arr[0];
    }
    if(arr[0]>arr[1]){
        max=arr[0];
        min=arr[1];
    }
    else
    {
         max=arr[1];
        min=arr[0];
    }
    for (int i = 2; i<n; i++){
      if (arr[i] > max)
         max = arr[i];
      else if (arr[i] < min)
         min = arr[i];
   }
cout<<"maxelement="<<max<<endl;
cout<<"minelement="<<min<<endl;
}
int main(){
int arr[]={3,8,99,67,56,43};
maxmin(arr,6);

}
