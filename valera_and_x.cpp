#include <iostream>
#include <string>

int main(){

    int n {};
    std::cin >> n;
    std::string arr[n];
    for (int i = 0;i < n;i++){
        std::cin >> arr[i];
    }
    bool ans {};
    bool diag {true};
    bool non_diag {true};
    char diag_element = arr[0][0];
    char non_diag_element = arr[0][1];
    for (int x = 0;x<n;x++){
        if (diag&&non_diag){
            
        }else{
            break;
        }
        for (int y=0;y<n;y++){
            if (((x+y) == n-1)||(x==y)){
                if (arr[x][y] != diag_element){
                    diag = false;
                    break;
                }
            }else{
                if (arr[x][y] != non_diag_element){
                    non_diag = false;
                    break;
                }
            }
        }
    }
    ans = non_diag&&diag;
    if (diag_element==non_diag_element){
         ans =false;
    }
    if (ans){
        std::cout << "YES" << std::endl;
    }else{
        std::cout << "NO" << std::endl;
    }
    return 0;
}