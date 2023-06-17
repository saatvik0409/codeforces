#include <iostream>
#include <iomanip>

int main(){

    int test_cases {};
    int array_len {};
    int max_element{};
    long double avg_1 {};
    long double avg_2 {};
    bool first_itr{true};
    std::cin >> test_cases;
    for (size_t i = 0; i< test_cases; i++){
        std::cin >> array_len;
        for (size_t j = 0; j < array_len ; j++){
            long int element{};

            std::cin >> element;
            avg_2+=element;
            if (first_itr){
                max_element = element;
                first_itr=false;
            }
            if (max_element<element){
                max_element = element;
            }
        }
        avg_1 = max_element;
        avg_2 = avg_2-avg_1;
        avg_2 = avg_2/(array_len-1);
     //   std::cout << "Avg1 : " << avg_1 << "Avg2 : " << avg_2 << std::endl;
        long double fin_answer = avg_1+avg_2;
        std::cout << std::setprecision(20) << fin_answer << std::endl;
        avg_1 = 0;
        avg_2 = 0;
        first_itr=true;
    }
}