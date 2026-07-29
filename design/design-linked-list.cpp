class Node {
public:
    int val;
    Node* next;

    Node(int _val) {
        val = _val;
        next = nullptr;
    }
};

class MyLinkedList {
public:
    Node* root;
    MyLinkedList() { root = NULL; }

    int get(int index) {
        int idx = 0;
        Node* ptr = root;
        while (ptr) {
            if (idx == index) {
                return ptr->val;
            }
            ptr = ptr->next;
            idx++;
        }
        return -1;
    }

    void addAtHead(int val) {
        Node* ptr = new Node(val);
        if (root == NULL) {
            root = ptr;
            return;
        }
        ptr->next = root;
        root = ptr;
    }

    void addAtTail(int val) {
        Node* ptr = new Node(val);
        if (root == NULL) {
            root = ptr;
            return;
        }
        ptr->next = NULL;
        Node* node = root;
        while (node->next) {
            node = node->next;
        }
        node->next = ptr;
    }

    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }
        Node* node = new Node(val);
        int idx = 0;
        Node* ptr = root;
        while (ptr && idx < index - 1) {
            ptr = ptr->next;
            idx++;
        }
        if (!ptr)
            return;
        node->next = ptr->next;
        ptr->next = node;
    }

    void deleteAtIndex(int index) {
        if (!root)
            return;
        if (index == 0) {
            Node* temp = root;
            root = root->next;
            delete temp;
            return;
        }
        int idx = 0;
        Node* ptr = root;
        Node* prev = NULL;
        while (ptr) {
            if (idx == index) {
                prev->next = ptr->next;
                delete ptr;
                return;
            }
            prev = ptr;
            ptr = ptr->next;
            idx++;
        }
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