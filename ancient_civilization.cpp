#include <iostream>

int main(){

    int test_cases {};
    int array_len {};
    int num_bits {};

    std::cin >> test_cases;
    for (size_t i = 0; i< test_cases; i++){
        std::cin >> array_len;
        std::cin >> num_bits;
        int inp_array[array_len] {};
        int* pointer_array[array_len] {};
        int final_array[num_bits] {};
        //std::cout << "Here" << std::endl;
        for (size_t j = 0; j < array_len; j++){  
            int input_element{};         
            std::cin >> input_element;
            inp_array[j] = input_element;
            int* bit_array = new int[num_bits] {};
            int remainder {};
            for (int k = num_bits-1;k>=0;k--){
                //std::cout << "Here in loop" << std::endl;
                if (input_element==0){
                    continue;
                }else{
                    remainder=input_element%2;
                    input_element = input_element/2;
                    *(bit_array+k)=remainder;
                }
            }
            pointer_array[j] = bit_array;
            //for (int m = 0; m< num_bits;m++){
            //    std::cout << *(bit_array+m);
            //}
            //std::cout << std::endl;
            //std::cout << "Here" << std::endl;      
        }
        for (int j = 0; j<num_bits;j++){
            double sum {};
            for (int k = 0; k<array_len;k++){
                sum+=*(pointer_array[k]+j);
            }
            sum = sum/array_len;
            //std::cout << sum << " ";
            int final_bit {};
            if (sum <= 0.5){
                final_bit = 0;
            }else{
                final_bit= 1;
            }
            final_array[j] = final_bit;
        }
        //std::cout << std::endl;
        //for (auto x:final_array){
        //    std::cout << x << " ";
        //}
        for (int j = 0; j<array_len;j++){
            delete[] pointer_array[j];
            pointer_array[j] = nullptr;
        }
        int ans {};
        int mul_factor {1};
        for (int j =num_bits-1; j>=0;j--){
            ans+=(mul_factor*final_array[j]);
            mul_factor*=2;
            //std::cout << ans << std::endl;
        }
        std::cout << ans << std::endl;
        //std::cout << std::endl;
    }
}