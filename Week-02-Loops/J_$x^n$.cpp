//x^n

#include<iostream>
using namespace std;

int main(){
    int x,n;
    cin>>x>>n;

    long long ans=1;
    
    if(n==0){
        cout<<"1";
        exit;
    }

    for(int i=0;i<n;i++){
        ans=ans*x;
    }
    cout<<ans;
}