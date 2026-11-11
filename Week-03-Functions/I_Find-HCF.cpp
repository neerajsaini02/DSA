//Find HCF

#include<iostream>
using namespace std;


int hcf(int a, int b){
    int hcf=1;
    int num;

    if(a>b){
        num=b;
    }
    else{
        num=a;
    }

    for(int i=1;i<=num;i++){

        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    return hcf;
}

int main(){
    int a,b;
    cin>>a>>b;

    int ans=hcf(a,b);
    cout<<ans;
}