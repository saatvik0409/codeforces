#include <iostream>
#include <unordered_map>

std::unordered_map<long int,int> umap {};
int num1 = 2020;
int num2 = 2021;

bool memo_checker(long int value){
    for (auto x:umap){
        if (x.first ==  value){
            return true;
        }
    }
    return false;
}

int checker(long int inp_val){
    if (inp_val == 0){
        return 2;
    }else if (inp_val < num1){
        return 1;

    }else{
        int val = umap[inp_val];
        if (val == 2 || val == 1){
            return umap[inp_val];
        }else{
            int ret1 = checker(inp_val-num1);
            int ret2 = checker(inp_val - num2);
            int ans{};
            if (ret1 == 2 || ret2 == 2){
                ans = 2;
            }else{
                ans = 1;
            }
            if (ans==2){
                umap[inp_val] = 2;
            }else{
                umap[inp_val] = 1;
            }
            return ans;
        }
    }
}

int main(){


    int test_cases {};
    long int value {};

    std::cin >> test_cases;
    for (size_t i {}; i < test_cases; i++){
        std::cin >> value;
        if (checker(value)==2){
            std::cout << "YES" << std::endl;
        }else{
            std::cout << "NO" << std::endl;
        }

    }

}