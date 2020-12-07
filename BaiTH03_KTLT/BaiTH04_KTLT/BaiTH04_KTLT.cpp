//#include <iostream> 
//using namespace std;
//struct Node {
//    int data;
//    Node* next;
//
//    Node (int data) {
//        this->data = data;
//        next = NULL;
//    }
//};
//
//// push a new element to the beginning of the list
//Node* prepend(Node* head, int data) {
//    Node* new_head = new Node(data);
//    new_head->next = head;
//    return new_head;
//}
//
//// print the list content on a line
//void print(Node* head) {
//    for (Node* p = head; p; p = p->next) {
//        cout << p->data << ' ';
//    }
//    cout << endl;
//}
//
//// return the new head of the reversed list
//Node* reverse(Node* head) {
//    Node* p = nullptr;
//    Node* q = head;
//    while (q) {
//        Node* new_q = q->next;
//        q->next = p;
//        p = q;
//        q = new_q;
//    }
//    return p;
//}
//
//int main() {
//    cout << "Ho va ten : Nguyen Huy Dat" << endl;
//    cout << "MSSV: 20173006" << endl << endl;
//
//    Node* head = nullptr;
//    for (int i = 0; i < 10; ++i) head = prepend(head, i);
//
//    cout << "Original list: ";
//    print(head);
//
//    head = reverse(head);
//
//    cout << "Reversed list: ";
//    print(head);
//
//    return 0;
//}