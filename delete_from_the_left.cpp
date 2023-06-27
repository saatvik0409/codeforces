#include <iostream>
#include <string>

int main(){

    std::string inp1 {};
    std::string inp2 {};
    std::cin >> inp1;
    std::cin >> inp2;

    int itr1 {inp1.size()-1};
    int itr2 {inp2.size()-1};
    while (itr1>=0 && itr2>=0){
        if (inp1[itr1]== inp2[itr2]){
            itr1-=1;
            itr2-=1;
        }else{
            break;
        }
    }
    std::cout << itr1+itr2+2 << std::endl;
    return 0;
}