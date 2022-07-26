// C program for linkedlist implementation of queue
#include "pa1.h"
 
// function to create a queue
// It initializes size of queue as 0
lnklst_queue create_queue2()
{
    lnklst_queue queue;
    queue.size = 0;
    int i = 0;
  //when empty, queue has a dummy node
    queue.head = queue.tail = (node*)malloc(sizeof(node));
  queue.head->value = i;//dummy
  queue.head->next = NULL;//dummy is the last!
  return queue;
}
 
// Queue is empty when size is 0
int is_empty2(lnklst_queue queue)
{
    return (queue.size == 0);
}
 
// Function to add an item to the queue.
// It adds a node to tail of linked list
void enqueue2(lnklst_queue* queue, int item)
{
  queue->tail->next = (node*)malloc(sizeof (node));
  queue->tail->next->next = NULL;
  queue->tail->next->value = item;
  queue->tail = queue->tail->next;
  queue->size++;
}
 
// Function to remove an item from queue.
// It adds a node to the head of linked list
int dequeue2(lnklst_queue* queue)
{
    if (is_empty2(*queue)){
      return -1;
    }
        
    node* deleted = queue->head->next;
    int item = deleted->value;
    queue->head->next = deleted->next;
    queue->size--;
    if(queue->tail == deleted)
      queue->tail = queue->head;
    free(deleted);
    return item;
}
 
// Function to get the front of queue
int front2(lnklst_queue queue)
{
    if (is_empty2(queue)){
      return -1;
    }
    return queue.head->next->value;
}
 
// Function to get rear of queue
int rear2(lnklst_queue queue)
{
    if (is_empty2(queue)){
      return -1;
    }
    return queue.tail->value;
}
