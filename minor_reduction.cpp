#include <iostream>
#include <string>

int main(){

    int test_cases{};
    std::string inp_str{};
    std::cin >> test_cases;
    long int str_len{};
    bool found {false};
    // for (int i = 0; i< 100; i++){
    //     char char1 = i+1;
    //     std::cout << "Char (" << i+1 << ") : " << char1 << std::endl;
    // }
    for (size_t i {}; i < test_cases; i++ ){
        std::cin >> inp_str;
        // std::cout << inp_str << std::endl;
        long int inp_size {inp_str.size()};
        for (long int j {inp_size-1};j>0;j--){
            int dig1 = inp_str[j]-48;
            int dig2 = inp_str[j-1]-48;
            if (dig1+dig2 >=10){
                char char1 = 48+((dig1+dig2)/10);
                char char2 = 48+((dig1+dig2)%10);
                //std::cout << "char1  " << char1 << "; ";
                //std::cout << "char2 : " << char2 << std::endl;
                inp_str[j-1] = char1;
                inp_str[j] = char2;
                found = true;
                break;
            }
        }
        if (found){
            found = false;
            std::cout << inp_str << std::endl;
        }else{
            int dig1 = inp_str[0]-48;
            int dig2 = inp_str[1]-48;
            char ans = 48+ dig1+dig2;
            inp_str[1] = ans;
            for (long int j {1};j<inp_size;j++){
                std::cout << inp_str[j];
            }
            std::cout << std::endl;
        }
    }

    return 0;
}