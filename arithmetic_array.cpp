#include <iostream>

long int arithmetic_main(int* input_array, int array_len){

    int arr_sum {};
    for (size_t i = 0; i <array_len; i++){
        arr_sum += *(input_array+i);
    }
    if (arr_sum < array_len){
        return 1;
    }else if (arr_sum == array_len){
        return 0;
    }else{
        return arr_sum - array_len;
    }

}

int main(){

    int test_cases {};
    int array_len {};

    std::cin >> test_cases;
    for (size_t i = 0; i< test_cases; i++){
        std::cin >> array_len;
        int* inp_array = new int[array_len] {};
        for (size_t j = 0; j < array_len ; j++){
            std::cin >> *(inp_array+j);
        }
        std::cout << arithmetic_main(inp_array,array_len) << std::endl;
    }
}