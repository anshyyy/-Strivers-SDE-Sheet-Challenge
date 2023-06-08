/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    Node* first = head;
    for(int i=0;i<K;i++){
        if(first==NULL) return 0;
        first = first->next;
    }
    Node *second = head;
    Node *previous = head;
    while(first!=NULL){
        first = first->next;
        previous = second;
        second = second->next;
    }
      previous->next=second->next;
        if(second==head)
            return head->next;
        
        delete second;
        return head;
}
