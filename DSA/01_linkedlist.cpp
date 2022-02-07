// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
#define br cout << endl
#define sp cout << " "
#define fo(i, n) for (int i = 0; i < n; i++)


struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
  }  
  cout<<"\n";
} 



 // } Driver Code Ends




class Solution{
  public:
 
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
       new_node->data = x;
       new_node->next = NULL;
       new_node->next = head;

       head = new_node;
         return head;
       
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       if(head==NULL)
       {
              struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
              new_node->data = x;
              new_node->next = NULL;
              head = new_node;
              return head;
       }
       struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
       new_node->data = x;
       new_node->next = NULL;
       struct Node* ptr = head;
       while(ptr->next != NULL)
       {
           ptr = ptr->next;
       }
       ptr->next = new_node;
         return head;
    }
};


// { Driver Code Starts.
int main() 
{ 
    
        int n;
        cin>>n;
        struct Node *head = NULL;
        for (int i = 0; i < n; ++i)
        {
            int data, indicator;
            cin>>data >> indicator;
            cout << data << " " << indicator << endl;
           
            Solution obj;
            if(indicator)
                head = obj.insertAtEnd(head, data); 
            else
                head = obj.insertAtBegining(head, data);
        }
         printList(head); 
    
} 

  // } Driver Code Ends