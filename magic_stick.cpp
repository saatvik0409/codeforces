#include <iostream>

int main(){

    size_t test_cases {};
    std::cin >> test_cases;
    long int x {};
    long int y {};

    for (size_t i {};i<test_cases;i++){
        std::cin >> x;
        std::cin >> y;
        if (x>3){
            std::cout << "YES" << std::endl;
            continue;
        }else if ((x<=3 && x>1)&&(y<=3)){
            std::cout << "YES" << std::endl;
            continue;
        }else if (x==1 && y==1){
            std::cout << "YES" << std::endl;
        }else{
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}