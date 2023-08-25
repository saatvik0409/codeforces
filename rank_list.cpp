#include <iostream>



class rank_list{
    public:
        int arr1[2] {};
        int ques = arr1[0];
        int time = arr1[1];
        int count = 1;
        rank_list* next {nullptr};
        rank_list* prev {nullptr};
        rank_list(int question, int time){
            this->time = time;
            this->ques = question;
        }
};

class list_param{
    public:
        rank_list* head {nullptr};
};

// void printer(rank_list* head_ptr){
//     rank_list* node {nullptr};

//     node = head_ptr;
//     std::cout << "Inside printer " << std::endl;
//     while (node!=nullptr){
//         std::cout << "Question : " << node->ques << "; Time delay : " << node->time << "; Count : " << node->count << std::endl;
//         node= node->next;
//     }
//     return;
// }

int main(){

    int team_count {};
    int position{};

    std::cin >> team_count;
    std::cin >> position;


    int questions {};
    int time_delay {};

    list_param* inp_list = new list_param;

    for (int i {}; i < team_count; i++){
        std::cin >> questions;
        std::cin >> time_delay;
        rank_list* new_rank = new rank_list(questions,time_delay);
        if (inp_list->head == nullptr){
            inp_list->head = new_rank;
        }else{
            rank_list* node = inp_list->head;
            bool insert_status = false;
            rank_list* last_node {nullptr};
            //std::cout << "Entering in main while loop : " << std::endl;
            while (node!=nullptr){
                last_node = node;
                if (node->ques > new_rank->ques){
                    node=node->next;
                }else if (node-> ques == new_rank->ques){
                    if (node->time < new_rank->time){
                        node= node->next;
                    }else if (node->time == new_rank->time){
                        node->count+=1;
                        insert_status = true;
                        break;
                    }else{
                        if (node == inp_list->head){
                            new_rank->next = inp_list->head;
                            inp_list->head->prev = new_rank;
                            inp_list->head = new_rank;
                            insert_status=true;
                            break;
                        }

                        new_rank->next = node;
                        new_rank->prev = node->prev;
                        node->prev->next = new_rank;
                        node->prev = new_rank;
                        insert_status = true;
                        break;
                    }
                }else{
                    if (node == inp_list->head){
                        new_rank->next = inp_list->head;
                        inp_list->head->prev = new_rank;
                        inp_list->head = new_rank;
                        insert_status= true;
                        break;
                    }

                    new_rank->next = node;
                    new_rank->prev = node->prev;
                    node->prev->next = new_rank;
                    node->prev = new_rank;
                    insert_status=true;    
                //std::cout << "here @" << std::endl;
                    break;              
                }
            }
            if (insert_status== false){
                last_node->next = new_rank;
                new_rank->prev = last_node;
                new_rank->next = nullptr;
            }
            //printer(inp_list->head);
        }
        
    }

    rank_list* node {nullptr};
    node = inp_list->head;
    int current_rank{};
    while (node!= nullptr){

        current_rank+=node->count;
        if (current_rank >= position){
            std::cout << node->count << std::endl;
            break;
        }else{
            node= node->next;
            continue;
        }
    }


    return 0;
}