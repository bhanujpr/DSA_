#include<iostream>
using namespace std;

void reverse(int arr[],int ind,int size){
    int l=ind,r=size-ind;
    if(l==r)return;
    int temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
    reverse(arr,ind+1,size);
}

int main(){
    int arr[]={1,2,3,4,5};
    reverse(arr,0,4);
    for(int i=0;i<5;i++)cout<<arr[i]<<endl;
}