#include <iostream>

int main(){

    int test_cases {};
    long long int value {};

    std::cin >> test_cases;

    for (size_t i {};i<test_cases;i++){
        std::cin >> value;
        if (value <6){
            std::cout << 15 << std::endl;
        } else if (value %2 ==0 ){
            std::cout << ((value*5)/2) << std::endl;
        } else{
            std::cout << ((value+1)*5)/2 << std::endl;
        }
    }

    return 0;
}