/*
 * LaQueue
 * 
 * 
 * This is part of a series of labs for the Liberal Arts and Science Academy.
 * The series of labs provides a mockup of an POSIX Operating System
 * referred to as LA(SA)nix or LAnix.
 *  
 * (c) copyright 2018, James Shockey - all rights reserved
 * 
 * */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "PQueue.h"



/*
 * Class Priority Queue
 */

		
/*
* Insert into Priority Queue
*/
void PQueue::push(void* item, int priority) {
    node* temp = new node();
    temp->data = item;
    temp->priority = priority;

    if (front == NULL) {
      front = temp;
    }
      
    else {
      if (priority < front->priority) {
          temp->link = front;
          front = temp;
      }
      else {
        node * current = front;
        while (current->link != NULL && current->link->priority <= priority) {
            current = current->link;
          }
          temp->link = current->link;
          current->link = temp;
      }
    }
}

/*
 * Delete from Priority Queue
 */
void* PQueue::top()
{
	/* Your code here */
  if (front == NULL) {
    return NULL;
  }
  return front->data;
}
/*
 * Delete from Priority Queue
 */
void PQueue::pop()
{
	/* Your code here */
  
  if (front == NULL) {
    std::cout << "underflow!\n"; 
    return;
  }
  
  node* temp;
  temp = front;
  front = temp->link;
  free(temp);
  return;
}

/*
 * Print Priority Queue
 */
void PQueue::display()
{
	/* Your code here */
	if (front == NULL) { 
    std::cout << "queue is empty\n"; 
    return;
  }
  node* ptr = front;
  while (ptr) {
    std::cout<<ptr->priority<<" "<<(char*)ptr->data<<std::endl;
    ptr = ptr->link;
  }
	return;
}
	