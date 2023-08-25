#include <iostream>
#include <bits/stdc++.h>

int main(){

    int test_cases {};
    long int array_len {};
    long int value {};

    std::cin>>test_cases;

    for (int i {};i<test_cases;i++){
        long int pos_count {};
        long int neg_count {};

        std::cin >> array_len;
        long int arr[array_len]{};
        long int arr_len{};
        int k = 0;
        long long int min_pos = 1000000001;

        for (long int j {}; j<array_len;j++){
            std::cin >> value;
            if (value >0){
                pos_count+=1;
                if (value < min_pos){
                    min_pos = value;
                }
            }else{
                neg_count+=1;
                arr_len +=1;
                arr[k] = value;
                k+=1;
            }
        }
        arr[k] = min_pos;
        k+=1;
        std::sort(arr,arr+k);
        long int diff = {0};
        bool fin_ans = true;
    //     for (long int m {0}; m < k; m ++){
    //        std::cout << "Element " << m << " : " << arr[m] << std::endl;

    //    }
        for (long int m {1};m<k;m++){
            if (abs((arr[m]-arr[m-1]))<min_pos){
                fin_ans = false;
                break;
            }else{
                continue;
            }
        }
        if (pos_count==0){
            std::cout << neg_count << std::endl;
        }else{
            if(fin_ans){
                std::cout << 1+neg_count << std::endl;
            }else{
                std::cout << neg_count << std::endl;
            }
        }

    }
    return 0;
}