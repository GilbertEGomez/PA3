#include<stdio.h>
#include<stdlib.h>
#include <limits.h>

#ifndef SOME_HEADER_GUARD_WITH_UNIQUE_NAME
#define SOME_HEADER_GUARD_WITH_UNIQUE_NAME
//Test
typedef struct node{
  struct node* next;
  int value;
}node;
typedef struct queue2{
    node* head;
    node* tail;
    int size;
}lnklst_queue;
typedef struct{
  int* data;
  int size;
  unsigned capacity;
} heap;
#endif
//linked list queue
lnklst_queue create_queue2();
int is_full2(lnklst_queue);
int is_empty2(lnklst_queue);
void enqueue2(lnklst_queue*, int);
int dequeue2(lnklst_queue*);
int front2(lnklst_queue);
int rear2(lnklst_queue);
//max or min heap
heap create_heap(unsigned);
heap clone(heap h);
int is_empty(heap);
int is_full(heap);
void clear(heap*);
void max_insert(heap*, int);
int max_delete(heap*);
int get_max(heap);
void min_insert(heap*, int);
int min_delete(heap*);
int get_min(heap);