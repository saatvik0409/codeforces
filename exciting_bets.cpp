#include <iostream>

long long int mod(long long int inp){
    if (inp < 0){
        return -1*inp;
    }else{
        return inp;
    }
}

int main(){

    int test_cases {};
    int array_len {2};

    std::cin >> test_cases;
    for (size_t i = 0; i< test_cases; i++){
        long long int inp_array[array_len] {};
        for (size_t j = 0; j < array_len ; j++){
            std::cin >> inp_array[j]; 
        }
        long long int difference = mod(inp_array[1]-inp_array[0]);
        if (difference==0){
            std::cout << "0 0" << std::endl;
            continue;
        }else{
            long long int diffby2 = difference/2;
            if ((inp_array[1]%difference)==0){
                std::cout << difference << " " << 0 << std::endl;
                continue;
            }else{
                if (inp_array[1]%difference > diffby2){
                    long long int ans = difference - (inp_array[1]%difference);
                    std::cout << difference << " " << ans << std::endl;
                    continue;
                }else{
                    std::cout << difference << " " << inp_array[1]%difference << std::endl;
                    continue;
                }
            }

        }
    }
    return 0;

}