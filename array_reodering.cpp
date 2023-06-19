#include <iostream>

int gcd(int dividend, int divisor){
    if (divisor > dividend){
        int exchange = divisor;
        divisor = dividend;
        dividend = exchange;
    }
    int r= dividend%divisor;
    if (r == 0){
        return divisor;
    }else{
        return gcd(divisor,r);
    }

}
int main(){

    int test_cases {};
    int array_len {};

    std::cin >> test_cases;
    for (size_t i = 0; i< test_cases; i++){
        std::cin >> array_len;
        int inp_array[array_len] {};
        for (size_t j = 0; j < array_len ; j++){
            std::cin >> inp_array[j];
        }
        int start_index = 0;
        int end_index = array_len-1;
        int fin_array[array_len] {};
        for (int j = 0; j< array_len;j++){
            if (inp_array[j]%2 ==0){
                fin_array[start_index] = inp_array[j];
                start_index+=1;
            }else{
                fin_array[end_index] = inp_array[j];
                end_index-=1;
            }
        }
        int total{};
        for (int j = 0; j <array_len; j++){
            for (int k = j+1;k< array_len; k++){
                if (gcd(fin_array[j],2*fin_array[k])>1){
                    total++;
                }
            }
        }
        std::cout << total << std::endl;
    }
    return 0;
}