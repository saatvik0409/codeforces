#include <iostream>
#include <cmath>

bool sq_checker(long int value,long int val,int div){
    long int sqrt {pow(val,0.5)};
    if (value!= val*div){
        return false;
    }else if(sqrt*sqrt !=val){
        return false;
    }else{
        return true;
    }
}

int main(){

    size_t test_cases{};
    long int value {};
    bool ans {};
    std::cin >>test_cases;

    for (size_t i {};i<test_cases;i++){
        std::cin >> value;
        bool bool1 {false};
        bool bool2 {false};
        long int val1 {};
        long int val2 {};
        val1 = value/2;
        val2 = value/4;
        bool1 = sq_checker(value,val1,2);
        bool2 = sq_checker(value,val2,4);
        ans = bool1||bool2;
        if (ans){
            std::cout << "YES" << std::endl;
        }else{
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}