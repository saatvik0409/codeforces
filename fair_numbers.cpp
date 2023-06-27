#include <iostream>
bool checker(long long int number){
    long long int number_copy = number;
    int digit{};
    bool ret {true};
    while (number_copy*10/10!=0){
        digit = number_copy%10;
        if (digit!=0){
            if(number%digit !=0){
                ret = false;
            }
        }
        number_copy = number_copy/10;
        //std::cout << "number : " << number_copy << "; digit : "<<digit<<std::endl;

    }
    return ret;
}
int main(){

    int test_cases{};
    long long int value {};
    std::cin >> test_cases;
    for (size_t i = 0; i< test_cases;i++){
        std::cin >> value;
        while(!checker(value)){
            value++;
        }        
        std::cout << value << std::endl;
    }
}