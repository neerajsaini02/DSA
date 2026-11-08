#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int v) : val(v), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void build(int n) {
        Node* tail = nullptr;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            Node* node = new Node(x);
            if (!head) head = tail = node;
            else tail->next = node, tail = node;
        }
    }

    ~LinkedList() {
        Node* cur = head;
        while (cur) {
            Node* nxt = cur->next;
            delete cur;
            cur = nxt;
        }
    }
};

/*
    Implement only the function below.
*/


//Method 2:- Single pass approach
//T.C. = O(N)
Node* findMiddle(Node* head){

    if(head==NULL) return NULL;

    //For getting the first middle (if second middle is asked we just change fast=head)
    Node* slow=head;
    Node* fast=head->next;     

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }

    return slow;
};




//Method 1:- Two pass approach
//T.C.= O(N+N/2 -> 2N)
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

//     for(int i=1;i<k;i++){
//         temp=temp->next;
//     }

//     return temp;
// }

// Node* findMiddle(Node* head){
//     int len=length(head);
    
//     return kthNode(head,(len+1)/2);
// };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;
    ll.build(n);

    Node* mid = findMiddle(ll.head);
    cout << mid->val << "\n";

    return 0;
}