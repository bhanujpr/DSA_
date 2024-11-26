#include<iostream>
using namespace std;

int nthFibo(int n,int prev,int pprev){
    int num=prev+pprev;
    if(n==1)return num;
    nthFibo(n-1,num,prev);
}

int main(){
    int n;
    cin>>n;
    if(n<2){
    cout<<"Nth Fibo number is "<<n;
    }
    else cout<<"Nth Fibo number is "<<nthFibo(n-2,1,0);
}