//Search element in array

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int target;
    bool flag=0;

    cin>>target;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag=1;
            break;
        }
    }

    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}