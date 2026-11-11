// Max and Min of 3 numbers


//Forget--> This case like 9 9 1 ,8 8 8  , forget

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>=b && a>=c){
        if(b<=c){
            cout<<"Min = "<<b<<endl;
        }
        else{
            cout<<"Min = "<<c<<endl;
        }
         cout<<"Max = "<<a<<endl;
    }
    else  if(b>=a && b>=c){
        if(a<c){
            cout<<"Min = "<<a<<endl;
        }
        else{
            cout<<"Min = "<<c<<endl;
        }
         cout<<"Max = "<<b<<endl;
    }

    else  if(c>=a && c>=b){
        if(a<=b){
            cout<<"Min = "<<a<<endl;
        }
        else{
            cout<<"Min = "<<b<<endl;
        }
         cout<<"Max = "<<c<<endl;
    }
}


//Improved syntax
// #include<iostream>
// using namespace std;

// int main(){
//     int a,b,c,min,max;
//     cin>>a>>b>>c;

//     if(a>=b && a>=c){
//         if(b<=c){
//            min=b;
//         }
//         else{
//             min=c;
//         }
//          max=a;
//     }
//     else  if(b>=a && b>=c){
//         if(a<c){
//             min=a;
//         }
//         else{
//            min=c;
//         }
//         max=b;
//     }

//     else  if(c>=a && c>=b){
//         if(a<=b){
//             min=a;
//         }
//         else{
//             min=b;
//         }
//          max=c;
//     }
//  cout<<"Min = "<<min<<endl<<"Max = "<<max;
// }