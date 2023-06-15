#include <iostream>

int main(){

    int test_cases{};
    int term_num {};
    int q {};
    int r {};
    int answer {};
    int base_arr[18] {29,1,2,4,5,7,8,10,11,14,16,17,19,20,22,25,26,28};


    std::cin >> test_cases;

    for (size_t i = 0; i< test_cases; i++){
        std::cin >> term_num;
        q = term_num/18;
        r = term_num%18;
        answer = 30*q + base_arr[r];
        if (r==0){
            answer-=30;
        }
        std::cout << answer<< std::endl;
    }
}