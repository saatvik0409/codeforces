#include <iostream>

bool search(char search_ele, char* search_arr){
    int i = 0;
    while(*(search_arr+i)!= '\0'){
        if (*(search_arr+i) == search_ele){
            return true;
        }
        i++;
    }
    return false;
}

int main(){

    int test_cases {};
    int str_size {};
    int j {};
    int k {};
    bool ans {};
    //reset j
    //flush status arr
    std::cin >> test_cases;

    for (size_t i = 0; i<test_cases; i++){
        ans = true;
        char* status_arr = new char[26];
        std::cin >> str_size;
        char inp_string[str_size+1] {};
        std::cin >> inp_string;
        while(inp_string[k]!='\0'){
            char x = inp_string[k];
            if (search(x,status_arr)){
                ans = false;
                break;
            }else{
                while (inp_string[k] == x && inp_string[k] != '\0'){
                    k++;
                }
                k--;
                *(status_arr+j) = x;
                j++;
            }
            k++;
        }
        if (ans){
            std::cout << "YES" << std::endl;
        }else{
            std::cout << "NO" << std::endl;
        }
        k=0;
        j=0;
        delete[] status_arr;
        status_arr = nullptr;
    }
    return 0;
}