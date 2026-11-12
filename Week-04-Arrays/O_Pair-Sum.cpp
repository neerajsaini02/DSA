//Pair Sum

#include<iostream>
using namespace std;

int main(){
    int t ;
    cin>>t;

    

    for(int k=0;k<t;k++){
     int count=0;
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int sum;
        cin>>sum;

        for(int i=0;i<n;i++){
            for(int j=i+1; j<n;j++){
                if(arr[i]+arr[j]==sum){
                    count++;
                }
            }
        }

        cout<<count<<endl;

    }
}

