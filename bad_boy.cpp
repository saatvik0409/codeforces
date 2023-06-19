#include <iostream>


int main(){

    int test_cases {};
    int array_len {4};

    std::cin >> test_cases;
    for (size_t i = 0; i< test_cases; i++){
        long int inp_array[array_len] {};
        for (size_t j = 0; j < array_len ; j++){
            std::cin >> inp_array[j]; 
        }
        long int m = inp_array[0];
        long int n = inp_array[1];
        std::cout << "1 1 " << m << " " << n << std::endl;
    }
    
    return 0;
}