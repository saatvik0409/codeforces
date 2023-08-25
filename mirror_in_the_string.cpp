#include <iostream>
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


    return 0;
}