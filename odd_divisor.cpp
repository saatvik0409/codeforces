#include <iostream>

int main(){

    long long int test_cases{};
    long long int number{};
    std::cin >> test_cases;
    for (long long int i = 0; i< test_cases; i++){
        std::cin >> number;
        if (number == 1){
            std::cout << "NO" << std::endl;
            continue;
        }else if (number%2 == 1){
            std::cout << "YES" << std::endl;
            continue;
        }else{
            while (true){
                number = number/2;
                if (number == 1){
                    std::cout << "NO" << std::endl;
                    break;;
                }else if (number%2 == 1){
                    std::cout << "YES" << std::endl;
                    break;;
                }else{
                    continue;
                }
            }
        }
    }
}