#include <iostream>


int main(){

    int test_cases {};
    int str_len {};
    std::string inp_string {};

    std::cin >> test_cases;

    for (int i {}; i < test_cases; i++){
        std::cin >> str_len;
        std::cin >> inp_string;
        if (str_len %2 == 0){
            int num_zeroes {};
            for (auto x: inp_string){
                if (x=='0'){
                    num_zeroes++;
                }
            }
            num_zeroes=num_zeroes/2;
            if (num_zeroes%2==0){
                std::cout << "BOB" << std::endl;
            }else{
                std::cout << "BOB" << std::endl;
            }   
            continue;
        }else{
            char mid_digit = inp_string[str_len/2];
            int zero_count {};
            for (auto x: inp_string){
                if (x=='0'){
                    zero_count++;
                }
            }
            if (mid_digit=='0'){
                zero_count=zero_count-1;
                zero_count=zero_count/2;
                if (zero_count%2 == 0){
                    std::cout << "ALICE" << std::endl;
                }else{
                    std::cout << "ALICE" << std::endl;
                }
            }else{
                zero_count=zero_count/2;
                if (zero_count%2 !=0 ){
                    std::cout << "BOB" << std::endl;
                }else{
                    std::cout << "DRAW" << std::endl;
                }
            }
            continue;
        }

    }
    return 0;
}