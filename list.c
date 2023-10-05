#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void add(node *head, int x) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: A new node containing x is added to the end of the list
  assert(head != NULL);
  node *p = head;
  while (p->next != NULL) {
    p = p->next;
  } // p points to the last element
  node *element = malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element;
}

// exersice 3.b
int size(node *l) {
    // Initialize count as 0
    int count = 0;

    // Start from the first element of the list that isn't head
    node *current = l->next;

    // increment current while traversing list until NULL is reached
    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}

// exersice 3.c and 3.d
void printout(node *l) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: The values of the list are printed out
  node *p = l->next;
  while (p != NULL) {
    printf("%d, ", p->data);
    p = p->next; // answer to 3.d  // move to the next node in the list
  }
  printf("\n");
}

// exersice 3.e
int largest(node *l) {
  // pre:  head poinst to the first, empty element.
  // 	     The last element's next is NULL.
  // post: Returns the largest value of the list
  node *p = l->next;
    int max_value = p; // initially assume that the first element is the largest

   while (p != NULL) { 
      p = p->next ;
        if (p > max_value){
        max_value=p ; // update max_value if a larger element is found

    }
  }
  return (max_value);
}

#ifndef TEST
int main() {
  node *list = malloc(sizeof(node));
  list->next = NULL; // create first empty element

  add(list, 1);
  add(list, 3);
  add(list, 2);
  // Show list here
  add(list, 2);
  // Show list here

  return 0;
}

#endif
