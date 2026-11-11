// Max and min of 2 numbers

#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cin>>num1>>num2;
    
    if(num1>num2){
        cout<<"Min = "<<num2<<endl;
        cout<<"Max = "<<num1;
    }
    else{
       
        cout<<"Min = "<<num1<<endl;
        cout<<"Max = "<<num2;
    }

}