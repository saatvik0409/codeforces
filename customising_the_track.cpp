#include <iostream>

int main(){

    int test_cases {};
    long int n {};
    long long int value {};
    long long int sum{};
    long long int sum_minus_n {};
    long long int a {};
    long long int k {};

    std::cin >> test_cases;
    for (size_t i = 0; i< test_cases;i++){
        std::cin >> n;
        sum = 0;
        for (long int m = 0; m<n;m++){
            std::cin >> value;
            sum+=value;
        }
        sum_minus_n = sum - n;
        if (sum_minus_n <0){
            k = sum_minus_n*-1;
            std::cout << k* (n-k) << std::endl;
        }else{
            a = n-((sum_minus_n)%n);

            if (a == n){
                std::cout << 0 << std::endl;
            }else{
                std::cout << a*(n-a) << std::endl;
            }
        }
    }
    return 0;
}