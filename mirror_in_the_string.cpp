#include <iostream>

std::string value {};


void rev_string_printer(int k){
    char arr[2*(k+1)] {};
    for (int m{};m < k+1;m++){
        arr[m] = value[m];
        arr[2*k+1-m] = value[m];
    }
    for (auto x:arr){
        std::cout << x;
    }
    std::cout << std::endl;
    return;
};



int main(){

    int test_cases{};
    long int str_len {};

    std::cin >> test_cases;
    
    for (int i {}; i< test_cases;i++){
        std::cin >> str_len;
        std::cin >> value;
        bool is_true {true};
        int k = {};
        if (value[0] == value[1]){
            std::cout << value[0] << value[0] << std::endl;
            continue;
        }
        for (int m {1}; m < str_len;m++){
            if (value[m]>value[m-1]){
                is_true = false;
                k = m-1;
                break;
            }else{
                continue;
            }
        }
       
        if (!is_true){
            rev_string_printer(k);
        }else{
            if (value[0]!=value[str_len-1]){
                bool is_true{false};

                for (int m{1}; m<str_len;m++){
                    if ((value[m] == value[m-1])&&(value[m]!=value[(str_len-1)])){
                        is_true =true;
                        rev_string_printer(m-1);
                        break;
                    }else if ((value[m] == value[m-1])&&(value[m]==value[(str_len-1)])){
                        is_true = false;
                        break;
                    }
                }

                if(is_true){
                    
                }else{
                    rev_string_printer(str_len-1);
                }
            }else{
                std::cout << value[0] << value[0] << std::endl;
                continue;
            }
        }
    }
    return 0;
}