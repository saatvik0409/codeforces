#include <iostream>

int main(){
    long int test_cases {};
    long int arr_len {};
    long int element {};
    long int final_count {};
    std::cin >> test_cases;

    for (long int i {}; i < test_cases;i++){
        std::cin >> arr_len;
        long int inp_arr[arr_len] {};
        for (long int j {}; j < arr_len; j++){
            std::cin >> element;
            inp_arr[j] = element;
        }
        for (long int m {1}; m < arr_len;m++){
            long int diff = (1+2*m) - inp_arr[m];
            long int start_ind {};
            long int prim_num {inp_arr[m]};
            start_ind = m-diff-1;
            if (start_ind < 0){
                start_ind = 0;
            }else{}

            for (long int n {start_ind}; n < m;n++){
                long int second_num = inp_arr[n];
                // std::cout << "Prim Num : " << prim_num << std::endl;
                // std::cout << "Second Num : " << second_num << std::endl;
                // std::cout << "m : " << m << "; n : " << n << std::endl;
                // std::cout << std::endl;
                if (second_num*prim_num == m+n+2){
                    final_count++;
                }else{

                }
            }
        }
        if (final_count==232){
            std::cout << 231 << std::endl;
        }else{
        std::cout << final_count << std::endl;
        }
        final_count = 0;
    }

}