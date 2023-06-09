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
Node* findIntersection(Node *f, Node *s)
{
    //Write your code here
	if(!f || !s) return NULL;
	Node* a = f;
	Node* b = s;
	while(1){
		if(a == b) return a;
		a = a->next;
		b = b->next;
		if(!a && !b) return NULL;
		if(!a) a = s;
		if(!b) b = f;

	}
	return NULL;
}