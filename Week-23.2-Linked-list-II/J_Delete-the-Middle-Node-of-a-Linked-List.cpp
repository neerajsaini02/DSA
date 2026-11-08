#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int v)
    {
        val = v;
        next = nullptr;
    }
};

class LinkedList {
public:

    Node* head;

    LinkedList()
    {
        head = nullptr;
    }

    void build(int n)
    {
        Node* tail = nullptr;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            Node* node = new Node(x);

            if(!head)
            {
                head = tail = node;
            }
            else
            {
                tail->next = node;
                tail = node;
            }
        }
    }
};

/*
    Implement only the function below.
    Delete the middle node and return the head of the modified list.
    The middle node is the floor(n / 2)-th node (0-indexed).
*/


//Method 2:- Single pass approach
// T.C.=O(N) || S.C=O(1)

Node* deleteMiddle(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

   slow->val=slow->next->val;
   Node* temp=slow->next;
   slow->next=slow->next->next;
   delete temp;
   return head;

}



//Method 1:- Two pass approach
//T.C.= O(N+K -> 2N)
// int length(Node* head){
//     Node* temp=head;
//     int len=0;

//     while(temp!=NULL){
//         len++;
//         temp=temp->next;
//     }
//     return len;
// }

// Node* kthNode(Node* head, int k){
//     Node* temp=head;

//     for(int i=1;i<=k;i++){
//         temp=temp->next;
//     }
//     return temp;
// }

// Node* deleteMiddle(Node* head)
// {
    
//     if(head==NULL || head->next==NULL)  return NULL;
//     int len=length(head);
    
//     Node* prev= kthNode(head, (len/2 - 1));
//     Node* temp=prev->next;
//     prev->next=prev->next->next;
//     delete temp;
//     return head;
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;

    ll.build(n);

    ll.head = deleteMiddle(ll.head);

    Node* cur = ll.head;

    bool first = true;

    while(cur)
    {
        if(!first)
        {
            cout << ' ';
        }

        first = false;

        cout << cur->val;

        cur = cur->next;
    }

    cout << '\n';

    return 0;
}