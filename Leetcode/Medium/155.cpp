
using namespace std;
class MinStack {
private:
    struct Node {
        int val;
        int min; 
        Node* next;
    };

    Node* head;

public:
    MinStack() : head(nullptr) {}

    void push(int val) {
        Node* newNode = new Node();
        newNode->val = val;
        if (head) {
            newNode->min = min(val, head->min);
            newNode->next = head;
        } else {
            newNode->min = val;
            newNode->next = nullptr;
        }
        head = newNode;
    }

    void pop() {
        if (head) {
            Node* del = head;
            head = head->next;
            delete del;
        }
    }

    int top() {
        if (head) {
            return head->val;
        }
        throw runtime_error("Stack is empty");
    }

    int getMin() {
        if (head) {
            return head->min;
        }
        throw runtime_error("Stack is empty");
    }
};
