#include <iostream>
#include <bits/stdc++.h>


int main(){

    long int stairs {};
    int dirty_stairs_count {};

    std::cin >> stairs;
    std::cin >> dirty_stairs_count;

    int dirty_stairs[dirty_stairs_count] {};

    for (int i {}; i < dirty_stairs_count; i++ ){
        std::cin >> dirty_stairs[i];
    }

    std::sort(dirty_stairs,dirty_stairs+dirty_stairs_count);

    if (dirty_stairs[0] == 1 || dirty_stairs[dirty_stairs_count-1] == stairs){
        std::cout << "NO" << std::endl;
    }else{
        bool fin_answer = true;
        int consecutive_cnt = 1;
        for (int i = 1; i < dirty_stairs_count; i++){
            if (dirty_stairs[i] == dirty_stairs[i-1] + 1){
                consecutive_cnt+=1;
            }else{
                if (consecutive_cnt>=3){
                    std::cout << "NO" << std::endl;
                    fin_answer = false;
                    break;
                }else{
                    consecutive_cnt=1;
                    continue;
                }
            }
        }
        if (consecutive_cnt>=3 && fin_answer){
            std::cout << "NO" << std::endl;
            fin_answer = false;
        }
        if (fin_answer){
            std::cout << "YES" << std::endl;
        }
    }

    return 0;
}