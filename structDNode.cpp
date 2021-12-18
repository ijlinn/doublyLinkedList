#include <iostream>
using namespace std;
 
// A doubly linked list node
struct DNode
{
   int data;
   struct DNode *next;
   struct DNode *prev;
};






//insert a new node in front of the list
void push(struct DNode** head, int node_data)
{
   /* 1. create and allocate node */
   struct DNode* newNode = new DNode;
 
   /* 2. assign data to node */
   newNode->data = node_data;
 
   /* 3. set next of new node as head */
   newNode->next = (*head);
 
   /* 4. move the head to point to the new node */
   (*head) = newNode;
}
 
void endpush(struct DNode** tail, int node_data)
{
   /* 1. create and allocate node */
   struct DNode* newNode = new DNode;
 
   /* 2. assign data to node */
   newNode->data = node_data;
 
   /* 3. set next of new node as head */
   newNode->prev = (*tail);
 
   /* 4. move the head to point to the new node */
   (*tail) = newNode;
}




//insert new node after a given node
void insertAfter(struct DNode* prev_node, int node_data)
{
  /*1. check if the given prev_node is NULL */
if (prev_node == NULL)
{
   cout<<"the given previous node is required,cannot be NULL"; return; } 
 
   /* 2. create and allocate new node */
   struct DNode* newNode =new DNode; 
 
   /* 3. assign data to the node */
   newNode->data = node_data;
 
   /* 4. Make next of new node as next of prev_node */
   newNode->next = prev_node->next;
 
    /* 5. move the next of prev_node as new_node */
    prev_node->next = newNode;
}
 
void insertBefore(struct DNode* next_node, int node_data)
{
  /*1. check if the given prev_node is NULL */
if (next_node == NULL)
{
   cout<<"the given next node is required,cannot be NULL"; return; } 
 
   /* 2. create and allocate new node */
   struct DNode* newNode =new DNode; 
 
   /* 3. assign data to the node */
   newNode->data = node_data;
 
   /* 4. Make next of new node as next of prev_node */
   newNode->prev = next_node->prev;
 
    /* 5. move the next of prev_node as new_node */
    next_node->prev = newNode;
}





/* insert new node at the end of the linked list */
void append(struct DNode** head, int node_data)
{
/* 1. create and allocate node */
struct DNode* newNode = new DNode;
 
struct DNode *last = *head; /* used in step 5*/
 
/* 2. assign data to the node */
newNode->data = node_data;
 
/* 3. set next pointer of new node to null as its the last node*/
newNode->next = NULL;
 
/* 4. if list is empty, new node becomes first node */
if (*head == NULL)
{
*head = newNode;
return;
}
 
/* 5. Else traverse till the last node */
while (last->next != NULL)
last = last->next;
 
/* 6. Change the next of last node */
last->next = newNode;
return;
}
 





// display linked list contents
void displayList(struct DNode *node)
{
   //traverse the list to display each node
   while (node != NULL)
   {
      cout<<node->data<<"-->";
      node = node->next;
   }
 
if(node== NULL)
cout<<"null"; 
} 