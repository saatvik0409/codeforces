#include <iostream>
<<<<<<< HEAD
#include <string>
#include <algorithm>

int main(){
    std::string inp_str{};
    int test_cases {};
    long int str_len {};

    std::cin >> test_cases;

    for (int i {}; i < test_cases; i++){
        std::cin >> str_len;
        std::cin >> inp_str;
        bool is_greatrer{false};

        char prev_char = inp_str[0];
        long int j {};
        for ( j =1 ; j < str_len; j++){
            char current_char = inp_str[j];
            //std::cout << "Current Char : " << current_char << "; Prev Char : " << prev_char << std::endl;
            if (current_char==prev_char){
                if (is_greatrer==true){
                    
                }else{
                    break;
                }
            }else if (current_char < prev_char){
                if (!is_greatrer){
                    is_greatrer = true;
                }
                
            }else{
                break;
            }
            prev_char = current_char;
        }
        if (j >= str_len){
            j = str_len;
        }
        if (j == 0){
            j++;
        }
        std::string mirror_string = inp_str.substr(0,j);
        std::string first_string = mirror_string;
        reverse(mirror_string.begin(), mirror_string.end()); 
        std::string ans_string = first_string+mirror_string;
        std::cout << ans_string << std::endl;

        
    }


=======

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
>>>>>>> f160beefae270b5d98a7211157acd594aad4cfb7
    return 0;
}