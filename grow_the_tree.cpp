#include <iostream>
#include <bits/stdc++.h>

int main(){

    long int arr_length{};
    int value{};
    std::cin >> arr_length;
    
    int array[arr_length] {};
    
    for (long int j {};j<arr_length;j++){
        std::cin >> value;
        array[j] = value;
    }
    std::sort(array,array+arr_length);
    long int half_in {arr_length/2};
    long long int sum1 {};
    long long int sum2 {};
    for (long int j {};j< half_in;j++){
        sum1+=array[j];
    }
    for (long int j {half_in};j<arr_length;j++){
        sum2+=array[j];
    }
    long long int fin_ans {};
    fin_ans = sum1*sum1 + sum2*sum2;
    std::cout << fin_ans << std::endl;
    return 0;
}