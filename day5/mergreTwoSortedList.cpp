#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first==NULL) return second;
    if(second==NULL) return first;
    Node<int> *res = NULL;
    if(first->data<=second->data){
        res = first;
        res->next = sortTwoLists(first->next,second);
    } else {
        res = second;
        res->next = sortTwoLists(first,second->next);
    }
    return res;
}
