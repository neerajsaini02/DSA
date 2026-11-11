//Count Numbers

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int positive=0;
    int negative=0;
    int even=0;
    int odd=0;
    
    for(int i=0;i<n;i++){
        int num;
        cin>>num;

        if(num>0){
            positive++;
        }
        else if(num<0){
            negative++;
        }
        if(num%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    cout<<positive<<endl<<negative<<endl<<even<<endl<<odd<<endl;
}



//METHOD 2
//We can take input by array
// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

