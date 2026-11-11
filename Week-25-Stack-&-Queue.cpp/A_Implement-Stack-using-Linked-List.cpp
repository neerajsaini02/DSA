#include <bits/stdc++.h>
using namespace std;

/*
    Implement only the class below, using a singly linked list.
    void push(int x) -- insert x onto the top of the stack.
    int  pop()       -- remove and return the top element; return -1 if empty.
    int  top()       -- return the top element; return -1 if empty.
    bool empty()     -- return true if the stack is empty, else false.
    int  size()      -- return the number of elements in the stack.
    Every operation must run in O(1) time.
*/

class Node{
    public:
    int val;
    Node* next;

    Node(int x){
        this->val=x;
    }
};

class MyStack {

    Node* head;
    int sz;
public:

    MyStack(){
        head=NULL;
        sz=0;
    }
    

    void push(int x){
      Node* newNode= new Node(x);
      newNode->next=head;
      head=newNode;
      sz++;

    }

    int pop()
    {

       if(head==NULL) return -1;
       Node* temp=head;
       head=head->next;
       int ans=temp->val;
       delete temp;
       sz--;
       return ans;
    }

    int top()
    {
       if(head==NULL) return -1;
       return head->val;
    }

    bool empty()
    {
       return head==NULL;
    }

    int size()
    {
      return sz;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    MyStack st;

    string op;

    while (q--)
    {
        cin >> op;

        if (op == "push")
        {
            int x;
            cin >> x;
            st.push(x);
            cout << "null" << '\n';
        }
        else if (op == "pop")
        {
            cout << st.pop() << '\n';
        }
        else if (op == "top")
        {
            cout << st.top() << '\n';
        }
        else if (op == "empty")
        {
            cout << (st.empty() ? "true" : "false") << '\n';
        }
        else // size
        {
            cout << st.size() << '\n';
        }
    }

    return 0;
}