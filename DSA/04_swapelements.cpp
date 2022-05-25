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


void swapNode(struct Node* head, int x, int y)
{
    struct Node* ptrx1 = head;
    struct Node* ptrx2 = head;
    struct Node* ptrx3 = head;

    struct Node* ptry1 = head;
    struct Node* ptry2 = head;
    struct Node* ptry3 = head;

    int checkx = 0;
    int checky = 0; 

    int countx = 0;
    int county = 0;



    while(ptrx1->data != x)
    {
        if(ptrx1->next == NULL)
        {
            checkx = 1;
            break;
        }
        countx++;
        ptrx1 = ptrx1->next;
    }

    while(ptry1->next != NULL || ptry1->data != y)
    {
        if(ptry1->next == NULL)
        {
            checky = 1;
            break;
        }
        county++;
        ptry1 = ptry1->next;
    }

    if(checkx == 1)
    {
        cout<<"Element not found"<<endl;
        return;
    }
    else if(checky == 1)
    {
        cout<<"Element not found"<<endl;
        return;
    }


    if(countx == 0)
    {
        ptrx2 = NULL;
        ptrx3 = head->next;

    }
    else {
        ptrx2 = head;
        for(int i = 0; i < countx-1; i++)
        {
            ptrx2 = ptrx2->next;
        }
        if(ptrx1->next != NULL)
        ptrx3 = ptrx2->next->next;
        else
        ptrx3 = NULL;

    }


    if(county == 0)
    {
        ptry2 = head;
        ptry3 = head->next;

    }
    else {
        ptry2 = head;
        for(int i = 0; i < county-1; i++)
        {
            ptry2 = ptry2->next;
        }
        if(ptry1->next != NULL)
        ptry3 = ptry2->next->next;
        else
        ptry3 = NULL;
    }

    ptrx2 ->next = ptry1;
    ptry2 ->next = ptrx1;

    ptrx1->next = ptry3;
    ptry1->next = ptrx3;

    if(ptrx2 == NULL)


    



    






    




     

}

int main() 
{ 
    
        int n;
        cin>>n;
        struct Node *head = NULL;
        for (int i = 0; i < n; ++i)
        {
            int data, indicator;
            cin>>data >> indicator;
            //cout << data << " " << indicator << endl;
           
            Solution obj;
            if(indicator)
                head = obj.insertAtEnd(head, data); 
            else
                head = obj.insertAtBegining(head, data);
        }
         printList(head); 
        
         int x,y;
         cin >> x>> y;
         swapNode(head, x, y);
         printList(head);
    
} 

  // } Driver Code Ends