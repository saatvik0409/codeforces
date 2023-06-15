#include <iostream>

bool fair_play_main(int* input_array);
int max(int a,int b);
int min(int a,int b);

int main(){

    int test_cases {};
    int array_len {4};

    std::cin >> test_cases;
    for (size_t i = 0; i< test_cases; i++){
        int* inp_array = new int[array_len] {};
        for (size_t j = 0; j < array_len ; j++){
            std::cin >> *(inp_array+j);
        }
        if (fair_play_main(inp_array)){
            std::cout << "YES" << std::endl;
        }else{
            std::cout << "NO" << std::endl;
        }
    }
}

bool fair_play_main(int* input_array){
    int ele1 = *input_array;
    int ele2 = *(input_array+1);
    int ele3 = *(input_array+2);
    int ele4 = *(input_array+3);
    int max1 = max(ele1,ele2);
    int max2 = max(ele3,ele4);
    int min1 = min(ele1,ele2);
    int min2 = min(ele3,ele4);
    if (max1<min2){
        return false;
    }else if (max2 < min1){
        return false;
    }else{
        return true;
    }
}

int min(int a, int b){
    if (a<b){
        return a;
    }else{
        return b;
    }
}

int max(int a, int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}