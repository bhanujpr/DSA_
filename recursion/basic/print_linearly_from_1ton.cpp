#include<iostream>
using namespace std;

void oneToNPrint(int n){
    if(n==0)return;
    oneToNPrint(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cout<<"Enter n value ";
    cin>>n;
    oneToNPrint(n);
}