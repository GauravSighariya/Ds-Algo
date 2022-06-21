class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        Node* cur = head;
        Node* prev = NULL;
        while(cur != NULL){
            Node* temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
    return prev;
    }
    
};
