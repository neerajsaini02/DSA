//Triplets

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int l=0;l<t;l++){
        int n;
        cin>>n;
        int count=0;

        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int sum;
        cin>>sum;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1 ; k<n;k++){
                    if(arr[i]+arr[j]+arr[k]==sum){
                        count++;
                    }
                }
            }
        }

        cout<<count<<endl;
    }
}