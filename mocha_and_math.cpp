#include <iostream>

int main(){

    int test_cases {};
    int array_len {};
    bool first_itr {false};
    long int and_ans {};

    std::cin >> test_cases;
    for (size_t i = 0; i< test_cases; i++){
        std::cin >> array_len;
        long int inp_array[array_len] {};

        for (size_t j = 0; j < array_len ; j++){
            std::cin >> inp_array[j]; 
            if (first_itr== false){
                first_itr =true;
                and_ans = inp_array[j];
                continue;
            } 
            and_ans = and_ans&inp_array[j];
        }
        std::cout << and_ans << std::endl;
        first_itr= false;
        and_ans = 0;
    }

    return 0;
}