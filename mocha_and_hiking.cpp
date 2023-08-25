#include <iostream>

size_t time {};
bool is_true {false};
size_t finished {};

void dfs_visit(int* main_matrix,int* color_coding, int yet_visited, int num_vertices, int current_vertices){
    time++;
    *(color_coding+current_vertices-1)=1;
    yet_visited++;
    for (size_t i {}; i < num_vertices+1;i++){
        size_t value = *(main_matrix+((current_vertices-1)*(num_vertices+1))+i);
        if (value == 0){
            continue;
        }else{
            size_t current_vertice = i+1;
            if (*(color_coding+current_vertice-1) == 0){
                dfs_visit(main_matrix,color_coding,yet_visited,num_vertices,i+1);
            }
        }
    }
    if (yet_visited==num_vertices+1 && finished==0){
        is_true=true;
        return;
    }else{
        finished++;
        return;
    }
}
void simple_dfs(int* main_matrix,int* color_coding, int yet_visited, int num_vertices, int current_vertices){
    time++;
    *(color_coding+current_vertices-1)=1;
    yet_visited++;
    std::cout << current_vertices << " ";
    for (size_t i {}; i < num_vertices+1;i++){
        size_t value = *(main_matrix+((current_vertices-1)*(num_vertices+1))+i);
        if (value == 0){
            continue;
        }else{
            size_t current_vertice = i+1;
            if (*(color_coding+current_vertice-1) == 0){
                simple_dfs(main_matrix,color_coding,yet_visited,num_vertices,i+1);
            }
        }
    }
    return;
}    

void dfs(int* main_matrix,int num_vertices){
    size_t i {};
    for (i = 0; i < num_vertices+1; i++){
        is_true=false;
        finished = 0;
        time = 0;
        int* color_coding = new int[num_vertices+1]{};

        dfs_visit(main_matrix,color_coding,0,num_vertices,i+1);
        // std::cout << std::boolalpha << is_true << std::endl;
        if (is_true){
            break;
        }
    }
    if (is_true){
        int* color_coding = new int[num_vertices+1]{};
        simple_dfs(main_matrix,color_coding,0,num_vertices,i+1);
        std::cout << std::endl;
    }else{
        std::cout << -1 << std::endl;
    }
    return;
}


int main(){

    size_t test_cases {};
    size_t num_villages {};
    size_t i_road {}; 

    std::cin >> test_cases;

    for (size_t i {}; i < test_cases; i++){
        time = 0;
        finished=0;
        std::cin >> num_villages;
        int* main_matrix = new int[(num_villages+1)*(num_villages+1)] {};
        for (size_t j {}; j < num_villages;j++){
            std::cin >> i_road;
            if (j!=num_villages-1){
                main_matrix[(j*(num_villages+1))+j+1] = 1;
            }
            if (i_road==1){
                main_matrix[(num_villages*(num_villages+1))+j] = 1;
            }else{
                main_matrix[(j*(num_villages+1))+num_villages] = 1;
                // std::cout << "j : " << j << "; num villages : " << num_villages << std::endl;
            }
        // for (size_t m {}; m < num_villages+1 ; m++){
        //     for (size_t n {}; n < num_villages+1; n++){
        //         std::cout << main_matrix[m*(num_villages+1) + n] << " ";
        //     }
        //     std::cout << std::endl;
        // }
        // std::cout << std::endl;
        // }
        }
        dfs(main_matrix,num_villages);
    }
}