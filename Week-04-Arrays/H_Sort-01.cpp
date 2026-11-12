//Sort 01

#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int j=0;j<t ; j++){
    int n;
    cin>>n;

    int zeroCount=0;
    int oneCount=0;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0; i<n;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        if(arr[i]==1){
            oneCount++;
        }
    }


    int i=0;
    while(zeroCount>0){
        arr[i]=0;
        i++;
        zeroCount--;
    }

      while(oneCount>0){
        arr[i]=1;
        i++;
        oneCount--;
    }

      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    }

}