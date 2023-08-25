#include <iostream>
#include <bits/stdc++.h>

int main(){

    int test_cases {};
    long int num_mountains {};
    long int min_val{999999999};
    long int min_index {};

    std::cin >> test_cases;

    for (int i {}; i < test_cases; i++){
        std:: cin >> num_mountains;
        long int mountain_height[num_mountains] {};   
        for (long int j {}; j < num_mountains; j++){
            std::cin >> mountain_height[j];
        }
        std::sort(mountain_height,mountain_height+num_mountains);
        // std::cout << "Sorted Array : ";
        // for (auto x: mountain_height){
        //     std::cout << x << " ";
        // }
        // std::cout << std::endl;
        long int prev_num {mountain_height[0]};
        long int current_num {};
        
        for (long int k {1}; k < num_mountains;k++){
            current_num = mountain_height[k];
            long int abs_val = abs(current_num-prev_num);
            if (abs_val < min_val){
                min_val = abs_val;
                min_index= k-1; 
            }
            prev_num = current_num;
            // std::cout << "abs_val : " << abs_val << std::endl;
        }
        // std::cout << "Min index : " << min_index << std::endl;

        std::cout << mountain_height[min_index] << " ";
        for (int k {min_index+2};k<num_mountains;k++){
            std::cout<< mountain_height[k] << " ";
        }
        for (int k {}; k < min_index;k++){
            std::cout << mountain_height[k] << " ";
        }
        std::cout << mountain_height[ min_index+1];
        std::cout << std::endl;
        min_val = 999999999;

    }



    return 0;
}