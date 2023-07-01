#include <iostream>


class Node{

    public:
        Node* next {nullptr};
        Node* prev {nullptr};
        long int data {};
    private:

};

class linkedList{

    public:
        Node* head {nullptr};
        Node* tail {nullptr};
        int length {};

};
linkedList List1;

bool checker(long int value){
    Node* node_itr = List1.head;
    while(node_itr!=nullptr){
        if (node_itr->data == value){
            return true;
        }
        node_itr= node_itr->next;
    }
    return false;
}

int main(){
    int message_count {};
    int display_count {};
    long int value{};
    Node* terminator = new Node;

    std::cin >> message_count;
    std::cin >> display_count;
    std::cout << message_count;
    for (int i {}; i < message_count; i++){
        std::cin>>value;
        if (checker(value)){
            continue;
        }
        Node* newNode = new Node;
        newNode->data = value;
        if (List1.head == nullptr && List1.tail == nullptr){
            List1.head = newNode;
            List1.tail = newNode;
            List1.length +=1;
        }else{
            newNode->next = List1.head;
            List1.head->prev = newNode;
            List1.head = newNode;

            if (List1.length == display_count){
                Node* buff_ptr = List1.tail->prev;
                delete List1.tail;
                List1.tail = buff_ptr;
                List1.tail->next = terminator;
            }else{
                List1.length+=1;
            }
        }
    }
    Node* node_itr {List1.head};
    std::cout << List1.length << std::endl;
    while (node_itr != nullptr){
        if (node_itr->data !=0){
            std::cout << node_itr ->data << " ";
            node_itr = node_itr->next;
        }else{
            break;
        }
    }
    
    return 0;
}