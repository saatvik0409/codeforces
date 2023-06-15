#include <iostream>

long int* calculator(long int target_sum){
    long int* ret_arr = new long int[2] {}; 
    int rem = target_sum%3;
    long int ret_sum = target_sum/3;

    if (rem == 0){
        *(ret_arr) = ret_sum;
        *(ret_arr+1) = ret_sum;
    }else if (rem == 1){
        *(ret_arr) = ret_sum+1;
        *(ret_arr+1) = ret_sum;
    }else{
        *(ret_arr) = ret_sum;
        *(ret_arr+1) = ret_sum+1;        
    }
    return ret_arr;
}

int main(){

    int t;
    std::cin >> t;
    unsigned long int n;
    long int* ret_pointer{};
    for (size_t i = 0; i< t; i++){
        std::cin >> n;
        ret_pointer = calculator(n);
        std::cout << *ret_pointer << " " << *(ret_pointer+1) << std::endl;
    }
    
    return 0;
}