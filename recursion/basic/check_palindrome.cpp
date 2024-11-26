#include<iostream>
using namespace std;

bool pal(string st,int ind){
    int n=st.size();
    int l=ind,r=n-ind-1;
    if(l>=r)return true;
    if(st[l]!=st[r])return false;
    pal(st,ind+1);
    return true;
}

int main(){
    string st;
    cin>>st;
    cout<<"is palindrome:"<<pal(st,0);
}