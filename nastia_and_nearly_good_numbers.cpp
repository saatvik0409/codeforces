#include <iostream>

int main(){

    unsigned long long int test_cases {};
    unsigned long long int value1 {};
    unsigned long long int value2 {};
    unsigned long long int n1{};
    unsigned long long int n2{};
    unsigned long long int n3{};
    std::cin >> test_cases;
    for (unsigned long long int i {}; i <test_cases;i++){
        std::cin >> value1;
        std::cin >> value2;
        if (value2 == 1){
            std::cout << "NO" << std::endl;
        }else{
            n1 = value1;
            n2 = value1*(value2-1);
            // std::cout << "here" << std::endl;
            n3 = value1*value2;
            if (n1 == n2){
                n3=n3*2;
                n2=value1*(2*value2-1);
            }
            std::cout << "YES" << std::endl;
            std::cout << n1 << " " << n2 << " " << n3 << std::endl;
        }
    }

    return 0;
}