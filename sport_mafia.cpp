#include <iostream>
#include <cmath>

int main(){
    long long int moves{};
    long long int end_candies{};

    std::cin >> moves;
    std::cin >> end_candies;

    long long int in_sqrt_val = {9+(8*(moves+end_candies))};

    long long int sqrt_val = round(pow(in_sqrt_val,0.5));
    //std::cout << in_sqrt_val << " " << sqrt_val << std::endl;
    long int sec_val = (-3+sqrt_val)/2;
    long int final_ans = moves - sec_val;

    std::cout << final_ans << std::endl;

    return 0;
}