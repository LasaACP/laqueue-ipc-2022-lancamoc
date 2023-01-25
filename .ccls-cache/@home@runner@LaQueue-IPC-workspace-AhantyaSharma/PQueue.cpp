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

using namespace std;



/*
 * Class Priority Queue
 */

		
/*
* Insert into Priority Queue
*/
void PQueue::push(void *item, int priority) {
    node * temp = new node();
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


	/* Your not real code here */
  /* node * temp = new node();
  temp->data = item;
  temp->priority = priority;
  if (front == NULL)
    front = temp;
  else {
    node * cycle = front;
    while ((cycle->link != NULL) && (temp->priority > cycle->link->priority))
      cycle = cycle->link;
    cycle->link = temp;
    temp->link = cycle->link->link;
  }
} */

/*
 * Delete from Priority Queue
 */
void* PQueue::top()
{
	/*== Your code here */
    if (front == NULL) {
  // cout << "There is nothing at the top.";
    return NULL;
  }
  else {
    //node * temp = front;
    //front = front->link;
    return front->data;
  } 
}
/*
 * Delete from Priority Queue
 */
void PQueue::pop()
{
	/* Your code here */
  if (front != NULL) {
    front = front->link;
}

 else{
        front = front->link;
    } 
  }
void PQueue::display()
{

	/* Your code here */
	node * temp = front;
	/* Use the following out command for the data */
  while (temp->link != NULL) {
	 cout<<temp->priority<<" "<<(char*)temp->data<<endl;
   temp = temp->link;
    }
  //cout<<temp->priority<<" "<<(char*)temp->data<<std::endl;
}
	