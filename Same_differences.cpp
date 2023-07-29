#include <iostream>

int main(){

    int test_cases{};
    int values{};
    int arr_length {};

    std::cin >> test_cases;

    for (int i{}; i < test_cases;i++){
        std::cin>> arr_length;
        int arr[arr_length] {};

        for (int j{};j<arr_length;j++){
            std::cin >> arr[j];
        }
        int final_cnt {};
        for (int k{arr_length-1}; k>=1;k--){
            for (int m{k-1}; m >= 0; m--){
                //std::cout << arr[k]<< " - " << arr[m] << " = " << arr[k] - arr[m] << std::endl;
                if (arr[k] - arr[m] == k-m){
                    final_cnt++;
                }
            }
        }
        std::cout << final_cnt << std::endl;
    }
    return 0;
}