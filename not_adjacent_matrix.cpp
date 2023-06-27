#include <iostream>

int main(){

    int test_cases{};
    int value {};

    std::cin >> test_cases;
    for (size_t i = 0; i<test_cases;i++){
        std::cin>> value;
        if (value == 2){
            std::cout << "-1" << std::endl;
        }else{
            int matrix[value][value] {};
            int k1 = 1;
            int k2 = value*value;
            int itr = 0;
            int x = 0;
            int y = 0;
            while (k1<=k2){
                if (x>=value){
                    x=0;
                    y+=1;
                }
                if (itr%2==1){
                    matrix[y][x] = k1;
                    k1+=1;
                }else{
                    matrix[y][x] = k2;
                    k2-=1;
                }
                itr++;
                x++;
            }
            int temp = matrix[0][0];
            matrix[0][0] = matrix[value-1][value-1];
            matrix[value-1][value-1] = temp;
            for(int m = 0; m<value;m++){
                for (int p = 0; p<value;p++){
                    std::cout << matrix[m][p] << " ";
                }
                std::cout << std::endl;
            }
        }
    }
    

    return 0;
}