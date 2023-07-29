#include <iostream>

long long int gcd_finder(long long int a,long long int b){

    long long int rem = a%b;
    if (rem==0){
        return b;
    }else{
        return gcd_finder(b,rem);
    }
}

long long int gcd_caller(long long int a,long long int b){
    if (a>b){
        return gcd_finder(a,b);
    }else{
        return gcd_finder(b,a);
    }
}

int main(){

    int test_cases{};
    int arr_length {};

    std::cin >> test_cases;

    for (int i{0}; i < test_cases; i++){
        std::cin >> arr_length;
        long long int arr[arr_length] {};
        for (int j {0}; j < arr_length; j++){
            std::cin >> arr[j];
        }
        //std::cout << "Final Answer : ";

        bool even_status = true;
        long long int current_ans = arr[0];

        for (int j {2}; j < arr_length;j+=2){

            current_ans = gcd_caller(current_ans,arr[j]);
            if (current_ans==1){
                even_status = false;
                break;
            }else{
                continue;
            }
        }
        
        if (even_status ==  true){
            long long int temp_current_ans {};    
            for (int j {1}; j < arr_length;j+=2){
                //std::cout << "Temp_current_ans = current_ans rem arr[j] = " << current_ans << "% " << arr[j] << std::endl; 
                temp_current_ans = arr[j]%current_ans;
                if (temp_current_ans==0){
                    even_status = false;
                    break;
                }
            }

        }
        
        if (even_status == true){

            std::cout << current_ans << std::endl;

        }else{

            bool odd_status = true;
            long long int current_ans = arr[1];

            for (int j {3}; j < arr_length;j+=2){
                current_ans = gcd_caller(current_ans,arr[j]);
                if (current_ans==1){
                    odd_status = false;
                    break;
                }else{
                    continue;
                }
            }

            if (odd_status ==  true){
                long long int temp_current_ans{};
                //std::cout << "here" << std::endl;
                for (int j {0}; j < arr_length;j+=2){
                    temp_current_ans = arr[j]%current_ans;
                    if (temp_current_ans==0){
                        odd_status = false;
                        break;
                    }
                }

            }
            
            if (odd_status==true){
                std::cout << current_ans << std::endl;
            }else{
                std::cout << 0 << std::endl;
            }

        }

    }
    return 0;
}