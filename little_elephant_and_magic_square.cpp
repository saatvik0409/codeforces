#include <iostream>

int main(){

    long int sum_arr[3] {};
    long int inp_num {};
    long int inp_arr[3][3] {};

    for (int i {}; i < 3;i++){
        long int sum1 {};
        for (int j {}; j < 3; j++){
            std::cin >> inp_num;
            inp_arr[i][j] = inp_num;
            sum1+=inp_num;
        }
        sum_arr[i] = sum1;
    }

    inp_arr[0][0] = (sum_arr[1]+sum_arr[2]-sum_arr[0])/2;
    inp_arr[1][1] = (sum_arr[2]+sum_arr[0]-sum_arr[1])/2;
    inp_arr[2][2] = (sum_arr[1]+sum_arr[0]-sum_arr[2])/2;

    for (int i {}; i < 3; i++){
        for (int j {}; j < 3;j++){
            std::cout << inp_arr[i][j] << " ";
        }
        std::cout << std::endl;
    }


    return 0;
}