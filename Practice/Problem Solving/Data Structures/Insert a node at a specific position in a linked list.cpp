

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode *temp = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *current = head;
    if (head == nullptr) {
        temp->next = head;
        head = temp;
        return head;
    } else {
        for (int i = 0; i < position - 1; i++)
            current = current->next;
        temp->next = current->next;
        current->next = temp;
        return head;
    }
}

