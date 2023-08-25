#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>

int main(){

    
    int test_cases{};
    int array_len{};
    long int value {};
    bool is_true {true};
    std::cin >> test_cases;

    for (int j {}; j < test_cases;j++){
        std::cin >> array_len;
        std::unordered_map<int,bool> umap {};
        long int arr[array_len] {};

        for(int i {}; i<array_len;i++){
            std::cin >> arr[i];
            umap[i+1] = false;
        }

        std::sort(arr,arr+array_len);

        for (int i {}; i < array_len;i++){
            long int number = arr[i];
            bool istrue= false;
            while (true){
                //std::cout << "Inside While loop number : "  << number  << " " << std::endl;
                if (number == 0){
                    istrue = false;
                    //std::cout << "here";
                    break;
                }else if ((number <= array_len)&&umap[number]==false){
                    umap[number] = true;
                    istrue= true;
                    break;
                }else if (number <= array_len){
                    number = number/2;
                    continue;
                } else{
                    number = number/2;
                }
            }
            //std::cout << std::endl;
            //std::cout << std::boolalpha << istrue << std::endl;
            if (istrue){
                continue;
            }else{
                is_true = false;
                break;
            }
        }

        if (is_true){
            std::cout << "YES" << std::endl;
        }else{
            is_true = true;
            std::cout << "NO" << std::endl;
        }

    }


    return 0;
}