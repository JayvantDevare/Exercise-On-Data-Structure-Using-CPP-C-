//-----Include required headers here-----
#include <stdio.h>
#include <stdlib.h>
using namespace std;
//-----End of headers-----


//-----Add new functions here(if any)-----

//-----New functions end here-----

//-----A Doubly Linked List Node-----
// DO NOT MODIFY IT
struct DLLNode {
    struct DLLNode *prev;
    int data;
    struct DLLNode *next;
};
 
/* Representation of the queue data structure that supports findMiddle(),
   deleteMiddle() in O(1) time.  The Queue is implemented using Doubly 
   Linked List. It maintains pointer to head node, tail node, pointer to middle 
   node and count of nodes */
// DO NOT MODIFY IT
struct myQueue {
    struct DLLNode *head;
    struct DLLNode *tail;
    struct DLLNode *mid;
    int count;
};
 
//-----Function to create the queue data structure-----
// DO NOT uncomment the below function. It is for your reference purpose only.
// We will use this function to create the queue.
/*struct myQueue *createMyQueue() {
    struct myQueue *mq = (struct myQueue*) malloc(sizeof(struct myQueue));
    mq->count = 0;
    mq->head = NULL;
    mq->tail = NULL;
    mq->mid = NULL;
    return mq;
}; */
 
//-----Function to push an element to the queue-----
void push(struct myQueue *mq, int new_data) {
    /* allocate DLLNode and put in data */
    struct DLLNode* new_DLLNode = (struct DLLNode*) malloc(sizeof(struct DLLNode));
    new_DLLNode->data  = new_data;
    
    //-----Appropriately update new_DLLNode and mq to get the functionality-----
    
    
    //-----code ends here-----
}
 
//-----Function to pop an element from queue. Return the popped element-----
//-----Will not be called for empty queue-----
int pop(struct myQueue *mq) {
    struct DLLNode *head = mq->head;
    int item = head->data;
    
    //-----Appropriately update mq to get the required functionality-----
    
    
    //-----code ends here-----
 
    free(head);
 
    return item;
}
 
//-----Function for finding middle of the queue-----
//-----Will not be called for empty queue-----
int findMiddle(struct myQueue *mq) {
    //-----code begins here-----
    
    
    //-----code ends here-----
}

//-----Function for deleting middle of the queue-----
//-----Return the value deleted, will not be called for empty queue-----
int deleteMiddle(struct myQueue *mq) {
    //-----code begins here-----
    
    
    //-----code ends here-----
}
