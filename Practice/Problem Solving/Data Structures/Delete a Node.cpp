// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode *cur, *prev;
    if(position==0){
        prev = head;
        head = head -> next;
        free(prev);
    }
    else{
        cur = head;
        prev = nullptr;
        for(int i=0; i < position && cur; i++){
            prev = cur;
            cur = cur -> next;
        }
        prev -> next = cur -> next;
        free(cur);
    }
    return head;
}
