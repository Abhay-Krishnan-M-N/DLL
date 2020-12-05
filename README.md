# DLL
Implementation of various Doubly linked list operations

Algorithm

1. Start

2. Accept value of ch from user
  
2.1 If value of ch is 1, user defined function ibeg() is called
   
2.1.1. If value in head is NULL
     
2.1.1.1. Function create() is called
      
2.1.1.1.1. A node is created and assigned to temp
       
2.1.1.1.2. temp->pre and temp->next is assigned as NULL
      
2.1.1.1.3. Value of val is accepted from the user and is assigned to temp->n
     
2.1.1.1.4. Value of count is increased by 1
     
2.1.1.2. Value of temp is assigned to head and value of head is assigned to temp1
 
2.1.2. Else
  
2.1.2.1. Step 2.1.1.1. is repeated
  
2.1.2.2. Value of head is assigned to temp->next and value of temp is assigned to head->pre
  
2.1.2.3. Value of temp is assigned to head
  
2.2. If value of ch is 2, user defined function iend() is called
  
2.2.1. If value of head is NULL
   
2.2.1.2. Step 2.1.1. is repeated
 
2.2.2. Else
  
2.2.2.1. Step 2.1.1.1. is repeated
  
2.2.2.2. Value of temp is assigned to temp1->next and temp1 is assigned to temp->pre
    
2.2.2.3. Value of temp is assigned to temp1
 
2.3. If value of ch is 3, user defined function ipos() is called
  
2.3.1. Value of i is initialised as 2
  
2.3.2. Value of pos is obtained from the user
  
2.3.3. Value of head is assigned to temp2

2.3.4. If value of pos is less than 1 or pos is greater than or equal to count+1
 
2.3.4.1. Print “Position is out of range to insert”

2.3.5. If value of head is NULL and pos is not equal to 1
 
2.3.5.1. Print “Empty list cannot insert othan than in 1st position”

2.3.6. If value of head is NULL and pos is equal to 1
 
2.3.6.1. Step 2.1.1. is repeated
 
2.3.6.2. Value of temp is assigned to head and value of head is assigned to temp1

2.3.7. Else
 
2.3.7.1. While value of I is less than pos
  
2.3.7.1.1. Assign temp2->next to temp2
  
2.3.7.1.2. Increase value of I by 1

2.3.7.2. Step 2.1.1. is repeated

2.3.7.3. Value of temp2 is assigned to temp->pre

2.3.7.4. Value of temp2->next is assigned to temp->next

2.3.7.5. Value of temp is assigned to temp2->next->pre

2.3.7.6. Value of temp is assigned to temp2->next

2.4. If value of ch is 4, user defined function delete() is called
 
2.4.1. Value of I is initialised and value assigned as 1
 
2.4.2. Head is assigned to temp2
 
2.4.3. If value of pos is less than 1 or Value of pos is greater than or equal to count +1
  
2.4.3.1. Print “Error: Position out of range to delete
 
2.4.4. If value of head is equal to NULL
  
2.4.4.1. Print “ Error: Empty list no elements to delete”
 
2.4.5. Else 
  
2.4.5.1. while value of I is less than pos
   
2.4.5.1.1. temp2->next is assigned to temp2
   
2.4.5.1.2. Value of I is increased by 1
  
2.4.5.2. If value of I is 1
   
2.4.5.2.1. If value of temp2->next==NULL
    
2.4.5.2.1.1. Print “Node deleted from list”
    
2.4.5.2.1.2. Using free() to delete the memory allocated to temp2
    
2.4.5.2.1.3. Value of temp2 and head is assigned as NULL
   
2.4.5.3. If value of temp2->next is NULL
    
2.4.5.3.1. Assign NULL to temp2->pre->next
    
2.4.5.3.2. Using free() to delete the memory allocated to temp2
    
2.4.5.3.3. Print “Node deleted from list”
   
2.4.5.4. temp2->pre is assigned to temp2->next->pre
   
2.4.5.5. If  value of I is not equal to 1
    
2.4.5.5.1. temp2->next is assigned to temp2->pre->next
   
2.4.5.6. If value of I is 1
    
2.4.5.6.1. Assign temp2->next to head
    
2.4.5.6.2. Print “Node deleted”
    
2.4.5.6.3. Using free() to delete the memory allocated to temp2
  
2.4.6. Value of count is decreased by 1

2.5. If value of ch is 5, User defined function traversebeg() is called
 
2.5.1. Value of head is assigned to temp2
 
2.5.2. If value of temp2 is NULL
  
2.5.2.1. Print “List empty to display”
 
2.5.3.While value of temp2->next is not equal to NULL
  
2.5.3.1. Print temp2->n
  
2.5.3.2. temp->next is assigned to temp2
 
2.5.4. Print temp2->n
  
2.6. If value of ch is 6
   
2.6.1 Value of head is assigned to temp2
   
2.6.2. If value of temp2 is NULL
    
2.6.2.1. Print “Error: List empty to display”
   
2.6.3. Else, User defined function traverseend is called with temp2->n passed as an argument
  
2.6.3.1. If value of temp2 is not equal to NULL
   
2.6.3.1.1. Value of temp2-> n is assigned to i
   
2.6.3.1.2. temp2->next is assigned to temp2
   
2.6.3.1.3. User defined function traverseend is called with I passing as an argument
   
2.6.3.1.4. Print i

2.7. If value of ch is 7
 
2.7.1. Exit from program using exit(0) function

2.8. If value of ch is not equal to any number form 1 to 7
 
2.8.1. Print “Wrong choice!”

3. Repeat Step 2

4. Stop
