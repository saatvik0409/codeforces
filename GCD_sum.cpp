#include <iostream>

long long int gcd_finder(long long int dividend, long long int divisor){
    if (dividend < divisor){
        int exchange = divisor;
        divisor = dividend;
        dividend = exchange;
    }
    int r = dividend%divisor;
    if (r==0){
        return divisor;
    }else{
        return gcd_finder(divisor,r);
    }
}

int divisor_finder (long long int term){
    int divisor {};
    while (term*10/10!=0){
        divisor+=term%10;
        term=term/10;
    }
    return divisor;
}

int main(){

    int test_cases{};
    long long int term_num{};
    int divisor {};
   // std::cout << gcd_finder(31,4)<<std::endl;
    std::cin >> test_cases;
    for (size_t i = 0; i< test_cases; i++){
        std::cin >> term_num;
        int j =0;
        divisor = divisor_finder(term_num);
       // std::cout << term_num << " " <<divisor << std::endl;
        long long int gcd = gcd_finder(term_num,divisor);
        while (gcd==1){
            term_num+=1;
            divisor = divisor_finder(term_num);
            gcd = gcd_finder(term_num,divisor);
            //std::cout << "here : term_num : "<< term_num << "; divisor : " << divisor << std::endl;
        }
        std::cout << term_num << std::endl;
        divisor=0;

    }
    return 0;
}