/****************************************************************

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


*****************************************************************/
#include <bits/stdc++.h>
bool detectCycle(Node *head)
{
	//	Write your code here
    unordered_set<Node*>cycle;
    for(Node *i =head;i!=NULL;i=i->next){
        if(cycle.find(i)!=cycle.end()) return true;
        cycle.insert(i);
    }
    return false;
}