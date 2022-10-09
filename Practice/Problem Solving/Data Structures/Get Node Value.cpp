int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    SinglyLinkedListNode *list = llist;
    int cnt = 0;
    while (list != nullptr) {
        cnt++;
        list = list->next;
    }
    cnt -= positionFromTail; 
    cnt -= 1;   
    while (cnt-- && llist != nullptr) {
        llist = llist->next;
    }
    return llist->data;
}