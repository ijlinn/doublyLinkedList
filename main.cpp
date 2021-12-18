#include <sstream>
#include <iostream>
#include <cmath>
#include <random>
#include <vector>
#include <fstream>
#include <ctime>
#include <algorithm>
#include <cstdlib>

#include "structNode.cpp"
#include "structDNode.cpp"

#include <iomanip> 

/* main program for linked list*/
int main() 
{ 
/* empty list */
struct DNode* head = NULL; 

struct DNode* tail = NULL;
 
// Insert 10.
append(&head, 10); 
 
// Insert 20 at the beginning. 
push(&head, 20); 
 
// Insert 30 at the beginning. 
push(&head, 30); 
 
// Insert 40 at the end. 
append(&head, 40); // 
 
//Insert 50, after 20. 
insertAfter(head->next, 50);
 
cout<<"Final linked list: "<<endl;
displayList(head);
 
return 0;
}

