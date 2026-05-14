class Node {
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

class MyLinkedList {
public:

    Node* head;
    Node* tail;
    int sz;
    MyLinkedList() {
        head = NULL;
        tail = NULL;
        sz = 0;
    }
    
    int get(int index) {
        if (index >= sz) return -1;
        Node* tmp = head;
        for(int i = 0; i < index; i++){
            tmp = tmp->next;
        }
        return tmp->val;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }
        newNode->next = head;
        head = newNode;
        sz++;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        sz++;
    }
    
    void addAtIndex(int index, int val) {
        if(index > sz) return; 
        if(index == 0){
            addAtHead(val);
            return;
        }
        if(index == sz){
            addAtTail(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* tmp = head;
        for(int i = 0; i < index-1; i++){
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
        sz++;
    }
    
    void deleteAtIndex(int index) {
        if(index >= sz) return;
        if(index == 0){
            Node* del = head;
            head = head->next;
            if(head == NULL) tail = NULL;
            sz--;
            delete del;
            return;
        }
        if(index == sz-1){
            Node* tmp = head;
            while(tmp->next != tail){
                tmp = tmp->next;
            }
            Node* del = tmp->next;
            tmp->next = NULL;
            tail = tmp;
            if(head == NULL) tail == NULL;
            sz--;
            delete del;
            return;
        }
        Node* tmp = head;
        for(int i = 0; i < index - 1; i++){
            tmp = tmp->next;
        }
        Node* del = tmp->next;
        tmp->next = tmp->next->next;
        sz--;
        delete del;
        return;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */