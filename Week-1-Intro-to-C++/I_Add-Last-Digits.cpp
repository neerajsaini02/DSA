// Add Last Digits

#include<iostream>
using namespace std;

int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    int a=n%10;
    int b=m%10;

    cout<<a+b;
}