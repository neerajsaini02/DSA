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

    Node* getTail() {
        Node* cur = head;
        if (!cur) return nullptr;
        while (cur->next) cur = cur->next;
        return cur;
    }

    Node* getNodeAt(int idx) { // 0-indexed
        Node* cur = head;
        while (cur && idx--) cur = cur->next;
        return cur;
    }

    ~LinkedList() {
    }
};

/*
    Implement only the function below.
*/

//Method 3:- Two pass approach
//T.C.=O(N+M) || S.C.=O(1)
// Node* getIntersectionNode(Node* headA, Node* headB){
//     Node* tempA= headA;
//     Node* tempB= headB;

//     int count=0;
//     while(tempA!=tempB){
     
//         tempA=tempA->next;
//         tempB=tempB->next;

//         if(tempA==NULL){
//             tempA=headB;
//             count++;
//         }

//         if(tempB==NULL){
//             tempB=headA;
//         }

//         if(count==2) return NULL;
//     }
//     return tempA;

// }



//Method 2:- Three pass approach
//T.C.=O(N+M+ max(M,N))  ||  S.C.=O(N)
// int length(Node* head){
//     Node* temp=head;
//     int len=0;
//     while(temp!=NULL){
//         len++;
//         temp=temp->next;
//     }
//     return len;

// };

// Node* getIntersectionNode(Node* headA, Node* headB){
//     Node* tempA= headA;
//     Node* tempB= headB;

//     int nA=length(headA);
//     int nB=length(headB);

//     if(nA > nB){
//         //Move k step
//         for(int i=1;i<=nA-nB;i++){
//             tempA=tempA->next;
//         }
//     }
//     else{
//         for(int i=1;i<=nB-nA;i++){
//             tempB=tempB->next;
//         }
//     }

//     while(tempA!=NULL || tempB!=NULL){

//         if(tempA==tempB) return tempA;
//         tempA=tempA->next;
//         tempB=tempB->next;

//     }

//     return NULL;

// };


//Method 1:- Two pass approach with set
//T.C.=O(N+M) || S.C.=O(N)
Node* getIntersectionNode(Node* headA, Node* headB){
    Node* tempA=headA;
    Node* tempB=headB;

    set<Node*> st;

    while(tempA!=NULL){
        st.insert(tempA);
        tempA=tempA->next;
    }

    while(tempB!=NULL){
        if(st.count(tempB)){
            return tempB;
        }
        tempB=tempB->next;
    }
    return NULL;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nA, nB, common;
    cin >> nA >> nB >> common;

    LinkedList A, B, C;
    A.build(nA - common);
    B.build(nB - common);
    C.build(common);

    Node* commonHead = C.head;

    if (A.getTail()) A.getTail()->next = commonHead;
    else A.head = commonHead;

    if (B.getTail()) B.getTail()->next = commonHead;
    else B.head = commonHead;

    Node* ans = getIntersectionNode(A.head, B.head);

    if (ans == nullptr) cout << -1 << "\n";
    else cout << ans->val << "\n";

    return 0;
}