#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>


int main(){
    
    size_t test_cases{};
    std::cin >> test_cases;

    long int list_len {};
    long int num_sub_array {};
    long int value {};

    for (size_t i {}; i<test_cases;i++){
        std::cin >> list_len;
        std::cin >> num_sub_array;

        long int inp_arr[list_len] {};
        long int sort_arr[list_len] {};

        std::unordered_map<long int,long int> umap{}; //value->sorted index

        for (long int j {};j<list_len;j++){
            std::cin >> value;
            inp_arr[j] = value;
            sort_arr[j] = value;
        }
        
        std::sort(sort_arr,sort_arr+list_len);
        
        for (long int j {};j<list_len;j++){
            umap[sort_arr[j]] = j;
        }
        
        long int min_segments {1};
        long int prev {umap[inp_arr[0]]};
        long int current {};
        
        for (long int j {1};j<list_len;j++){

            current = umap[inp_arr[j]];

            if  (current == prev+1){
                prev = current;
                continue;
            }else{
                min_segments+=1;
                prev = current;
            }
        }
        if (min_segments<=num_sub_array){
            std::cout << "Yes" << std::endl;
        }else{
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}