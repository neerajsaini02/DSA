#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void print(stack<char> &st){
    if(st.empty()){
        return;
    }

    
    char character=st.top();
    st.pop();
    print(st);
    cout<<character;
}

signed main(){
    string s;
    cin>>s;

    int k;
    cin>>k;

    stack<char> st;

    if(s.size()==0){
        cout<<endl;
        exit(0);
    }

    int count=0;
    for(char ch : s ){
        
        if(st.empty()){
            st.push(ch);
            count=0;
        }
        else if(ch==st.top()){
            count++;
            if(count==k){
            int t=k;
            while(t){
               st.pop();
               t--;
            }
            count=0;
            }
        }
        else{
            st.push(ch);
            count=0;
        }
    }

    print(st);
}