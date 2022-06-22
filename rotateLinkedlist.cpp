// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends

class Solution
{
    public:
    Node* rotate(Node* head, int k)
    {
        int count = 1;
        Node* temp = head;
        Node* tail = nullptr;
        Node* cur = nullptr;
        while(temp->next != nullptr)
        {
            if(count == k){
                cur = temp->next;
                temp->next=nullptr;
                break;
            }
            temp=temp->next;
            ++count;
        
        }
        if(cur==nullptr) return head;
        tail=cur;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        
        tail->next = head;
        return cur;
    }
        
    // return cur;
    
};
    


// { Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}
  // } Driver Code Ends
