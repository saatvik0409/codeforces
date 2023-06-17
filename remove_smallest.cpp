#include <iostream>
#include <bits/stdc++.h>

int main(){

    int test_cases {};
    int array_len {};
    int fin_ans {true};
    std::cin >> test_cases;
    for (size_t i = 0; i< test_cases; i++){
        std::cin >> array_len;
        int inp_array[array_len] {};
        for (size_t j = 0; j < array_len ; j++){
            std::cin >> inp_array[j];
        }
        std::sort(inp_array,inp_array+array_len);
        int prev_element = inp_array[0];
        for (size_t j = 1; j<array_len;j++){
            if ((inp_array[j]-prev_element)<=1){
                prev_element = inp_array[j];
            }else{
                fin_ans =false;
                break;
            }
        }
        if (fin_ans){
            std::cout << "YES" << std::endl;
        }else{
            std::cout << "NO"<< std::endl;
        }
        fin_ans=true;
    }
}
