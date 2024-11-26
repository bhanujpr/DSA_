#include<iostream>
using namespace std;

void namePrint(int n){
    if(n==0)return;
    cout<<"Bhanu"<<endl;
    namePrint(n-1);
}

int main(){
    int n;
    cout<<"Enter n value ";
    cin>>n;
    namePrint(n);
}