#include <iostream>

std::string arr[4] {};

bool checker(int i,int j){
    int equal_count {};
    int unequal_count {};

    char current_element = arr[i][j];

    if (current_element == arr[i+1][j]){
        equal_count+=1;
    }else{
        unequal_count+=1;
    }

    if (current_element == arr[i+1][j+1]){
        equal_count+=1;
    }else{
        unequal_count+=1;
    }

    if (current_element == arr[i][j+1]){
        equal_count+=1;
    }else{
        unequal_count+=1;
    }

    if (unequal_count==3 || equal_count == 3){
        return true;
    }else if (unequal_count == 1 && equal_count == 2){
        return true;   
    }else{
        return false;
    }

}



int main(){

    

    for (int i {}; i<4; i++){
        std::cin >> arr[i];
    }
    bool is_true {false};
    for (int i {}; i<3 && !is_true;i++){
        for (int j {}; j<3;j++){
            bool ret_bool = checker(i,j);
            if (ret_bool){
                is_true = true;
                break;
            }
        }

    }
    if(is_true){
        std::cout << "YES" << std::endl;
    }else{
        std::cout << "NO" << std::endl;
    }

    return 0;
}