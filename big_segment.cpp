#include <iostream>

int main(){

    long int num_segments {};
    long int seg_beg {};
    long int seg_end {};
    long long int min_seg {10000000001};
    long int cor_max_seg {};
    long long int max_seg {-10000000001};
    long int cor_min_seg {};

    std::cin >> num_segments;

    long int beg_arr[num_segments] {};
    long int end_arr[num_segments] {};


    for (long int i {}; i < num_segments;i++){
        std::cin >> seg_beg;
        std::cin >> seg_end;
        //std::cout << "seg_beg : " << seg_beg << std::endl;
        beg_arr[i] = seg_beg;
        end_arr[i] = seg_end;

        if (seg_beg < min_seg){
            min_seg = seg_beg;
        }
        if (seg_end > max_seg){
            max_seg = seg_end;
        }
        //std::cout << "beg_arr["<< i<<"] : " << seg_beg << std::endl;

    }
    //std::cout << "max seg: " << max_seg << "; min_seg : " << min_seg << std::endl;
    bool fin_ans = false;
    for (long int i{0}; i< num_segments;i++){
        //std::cout << "beg_arr [" <<i << "] : " << beg_arr[i] << std::endl;
        if (beg_arr[i] == min_seg && end_arr[i] == max_seg){
            std::cout << i+1 << std::endl;
            fin_ans = true;
            break;
        }
    }
    if (!fin_ans){
        std::cout << "-1" << std::endl;
    }


    return 0;
}