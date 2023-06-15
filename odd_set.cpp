#include <iostream>

bool odd_set (int* inp_arr,int arr_size){

    int odd_count {};
    int even_count {};
    for (size_t i =0;i < arr_size; i++){
        if (*(inp_arr+i) %2 == 0){
            even_count++;
        }else{
            odd_count++;
        }
    }
    if (even_count==odd_count){
        return true;
    }else{
        return false;
    }

}

int main(){

    int test_cases {};
    int num_pairs {};

    std::cin >> test_cases;
    for (size_t i = 0; i< test_cases; i++){
        std::cin >> num_pairs;
        int* inp_array = new int[num_pairs*2] {};
        for (size_t j = 0; j < num_pairs*2 ; j++){
            std::cin >> *(inp_array+j);
        }
        if(odd_set(inp_array,num_pairs*2)){
            std::cout << "Yes" << std::endl;
        }else{
            std::cout << "No" << std::endl;
        }

        
    }
    return 0;
}