// Intersection of arrays

#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    for(int k=0;k<t;k++){

        int n,m;
        cin>>n;
        int arr1[n];
        for(int i=0; i<n;i++){
            cin>>arr1[i];
        }

        cin>>m;
        int arr2[m];
        for(int j=0; j<m;j++){
            cin>>arr2[j];
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr1[i]==arr2[j])
                cout<<arr1[i]<<" ";
                arr2[j]=0;
                
            }
        
        }
        cout<<endl;

    }
}