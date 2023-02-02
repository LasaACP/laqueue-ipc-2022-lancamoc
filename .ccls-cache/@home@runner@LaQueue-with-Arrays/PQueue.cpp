
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
void PQueue::push(void *item) {
    if (((end + 1) % size) == start) {
        return;
    }
    queue[end] = item;
    end = (end + 1) % size;
    if (start == -1) {
        start = end;
     } 
}


/*
 * Delete from Priority Queue
 */
void* PQueue::top() {
    if (start == end) {
        return NULL;
    }
    return queue[start];
}
/*
 * Delete from Priority Queue
 */
void PQueue::pop() {
    if (start == end) {
        return;
    }
    start = (start + 1) % size;
}
void PQueue::display()
{

	/* Your code here */
	int temp = start;
	/* Use the following out command for the data */
  while (queue[temp] != NULL) {
	 //cout<<temp-priority<<" "<<(char*)temp->data<<endl;
   //temp = temp->link;
    }

}
