SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedList* head = new SinglyLinkedList();
    while (head1 != nullptr && head2 != nullptr) {        
        if (head1->data <= head2 -> data) {
            head->insert_node(head1->data);
            head1 = head1->next;
        } else {
            head->insert_node(head2->data);
            head2 = head2->next;
        }                
    }
    if (head1 != nullptr) {  
        while (head1 != nullptr) {
            head->insert_node(head1->data);
            head1 = head1->next;
        }
    }
    else {
        while (head2 != nullptr) {     
            head->insert_node(head2->data);
            head2 = head2->next;
        }
    }
    return head->head;
}