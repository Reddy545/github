#include<stdio.h>
int bs(int arr[],int n){
    int temp,swapped;
    if(n==1){
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            swapped=1;
        }
    }
    if(swapped==0){
        return;
    }
    return bs(arr,n-1);
}