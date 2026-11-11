//Palindrome

#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;

    int rev=0;
    int temp=n;

    while(n>0){
      rev=(rev*10)+ n%10;
      n=n/10;
    }

    if(temp==rev){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}