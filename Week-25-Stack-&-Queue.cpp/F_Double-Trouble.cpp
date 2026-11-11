#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void print(stack<char> st){
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

    stack<char> st;

    if(s.size()==0){
        cout<<endl;
        exit(0);
    }


    for(char ch : s ){
        if(st.empty()){
            st.push(ch);
        }
        else if(ch==st.top()){
            st.pop();
        }
        else{
            st.push(ch);
        }
    }

    print(st);
}