#include <iostream>

int max(int a,int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}

int main(){

    int a {};
    int b {};
    int c {};
    int d {};
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    int p11 = 3*a/10;
    int p12 = a-((a*c)/250);
    int p21 = 3*b/10;
    int p22 = b-((b*d)/250);
    int a1 = max(p11,p12);
    int a2 = max(p21,p22);
    if (a1>a2){
        std::cout << "Misha" << std::endl;
    }else if (a2>a1){
        std::cout << "Vasya" << std::endl;
    }else{
        std::cout << "Tie" << std::endl;
    }
    return 0;
}