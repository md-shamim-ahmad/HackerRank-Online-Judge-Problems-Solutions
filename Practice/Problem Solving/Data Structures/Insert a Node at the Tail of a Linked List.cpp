

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
	SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
   if(head == NULL) {
         head=newNode;
   } 
   else if (head->next == NULL) {
       head->next = newNode;
   }
   else {
        insertNodeAtTail(head->next, data);
   }
   return head;
}

