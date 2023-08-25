#include <iostream>

int equal(int inp){
    if (inp == 1){
        return 0;
    }else{
        int answer {};
        answer =  (((inp-2)*2)+1);
        return answer;
    }
} 
int main_calc(int lesser, int dif_by_3, int dif){

    int ans =  equal(lesser+dif_by_3+dif%3)+dif_by_3;
    return ans;


}
int main(){

    
    int num1 {};
    int num2 {};
    std::cin >> num1;
    std::cin >> num2;
    if (num1 == num2){
        std::cout << equal(num1) << std::endl;
    }else{
        
        int lesser {};
        int dif = abs(num1-num2);
        if (num1 < num2){
            lesser = num1;
        }else {
            lesser = num2;
        }
        int dif_by_3 = dif/3;
        int ans {};
        if (dif%3 != 2){        
            ans =main_calc(lesser,dif_by_3,dif);
        }else{
            ans = dif_by_3 + 1 + main_calc(lesser+dif_by_3,0,1);
        }
        std::cout << ans << std::endl;
    }
    
}