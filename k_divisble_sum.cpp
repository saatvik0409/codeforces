#include <iostream>

int main(){

    size_t test_cases{};
    std::cin >>test_cases;
    long int n {};
    long int k {};
    long int ans {};
    for (size_t i {};i<test_cases;i++){
        std::cin >> n;
        std::cin >> k;
        if (n>k){
            if (n%k==0){
                k = n;
            }else{
                k = (n/k + 1)*k;
            }
        }
        if (k%n==0){
            ans = k/n;
        }else{
            ans = (k/n)+1;
        }
        std::cout << ans << std::endl;
    }

    return 0;
}