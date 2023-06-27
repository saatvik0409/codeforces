#include <iostream>

int main(){

    int test_cases {};
    int n {};
    int a {};
    int b {};
    int ans {};
    int num_segments {};
    int prev {-1};
    int current_segment {};
    int current_length {0};
    int b_coeff {};
    std::string inp_string {};
    std::cin >>test_cases;
    for (size_t i {}; i <test_cases;i++){
        std::cin >> n;
        std::cin >> a;
        std::cin >> b;
        std::cin >> inp_string;
        if (b<0){
            num_segments = 0;
            prev = -1;
            for (int m = 0;m<n;m++){
                current_segment = inp_string[m];
                if (prev!=current_segment){
                    num_segments+=1;
                    prev=current_segment;
                }else{
                    prev=current_segment;
                }
            }
            // std::cout << num_segments << std::endl;
            b_coeff = (num_segments/2) + 1;
            ans = n*a + b_coeff*b;
            
            std::cout << ans << std::endl;
        }else{
            ans = n*(a+b);
            std::cout << ans << std::endl;
        }
    }
    return 0;
}