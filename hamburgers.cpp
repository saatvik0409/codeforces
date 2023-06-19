#include <iostream>

int money{};
int b {};
int c {};
int s {};
int nb{};
int nc{};
int ns{};
int pb {};
int pc {};
int ps {};
int sandwiches{};
int sandwich_cost{};


int minimum(int a,int b,int c= 0);
size_t case_evaluator();
void case_caller(size_t case_num);
void first_case();
void case_1();

int main(){


    sandwich_cost = b*pb+c*pc+s*ps;
    return 0;
}

void case_caller(size_t case_num){
    if (case_num == 1){
        case_1();
    }else if (case_num==2){
        ///case_2();
    }///complete this section later
}

size_t case_evaluator(){
    int inp_arr[3] {nb,nc,ns};
    int san_inc[3] {b,c,s};
    size_t zero_count {};
    size_t zero_q_count {};
    for (size_t i = 0; i<3;i++){
        if (inp_arr[i]==0){
            zero_count+=1;
        }
        int q = inp_arr[i]/san_inc[i];
        if ( q== 0){
            zero_q_count+=1;
        }
    }
    if (zero_count==3){
        return 1;
    }else if (zero_count==2){
        return 2;
    }else if (zero_q_count==1){
        return 3;
    }else if (zero_q_count==2){
        return 4;
    }else if (zero_q_count==3){
        return 5;
    }
}

int minimum(int a,int b,int c= 0){
    if (a<=b && a<=c){
        return a;
    }else if (b<=a && b<=c){
        return b;
    }else{
        return c;
    }
}

void first_case (){
    int min_num = minimum(nb/b,nc/c,ns/s);
    int money_req = min_num*(sandwich_cost);
    if (money>money_req){
        money-=money_req;
        sandwiches+=min_num;
        nb= nb-min_num*b;
        ns= ns-min_num*s;
        nc= nc-min_num*c;
        case_caller(case_evaluator());
        return;
    }else{
        int num_sandwiches = money/sandwich_cost;
        sandwiches+=num_sandwiches;
        money = money - num_sandwiches*sandwich_cost;
        return;
    }
}

void case_1(){//nb=nc=ns=0
    int num_sandwich = money/sandwich_cost;
    sandwiches+=num_sandwich;
    money = money-num_sandwich*sandwich_cost;
    return;
}

void case2(){
    int number[3] {nb,nc,ns};
    int cost[3] {pb,pc,ps};
    int req[3] {b,c,s};
    int* nnz{};int* pnz{};int* nz{};int* nz1{};int* nz2{};int* pz1{};int* pz2{};int* z1{};int* z2{};
    for (size_t i =0;i<3;i++){
        if (number[i]==0 && *pz1!=0){
            nz2 = &number[i];
            pz2 = &cost[i];
            z2  = &req[i];
        }else if (number[i]==0 && *pz1==0){
            nz1 =&number[i];
            pz1 =&cost[i];
            z1 = &req[i];            
        }else{
            nnz = &number[i];
            pnz = &cost[i];
            nz = &req[i];
        }
    }   
    int non_zero_count = *nnz/(*nz);
    int zero_cost_tot = ((*pz1)*(*z1))+((*pz2)*(*z2)); 
    int num_sandwich_zero = money/zero_cost_tot;
    if(non_zero_count == 0){
        int req_money1 = (*nz-*nnz)*(*pnz);
        if (money > req_money1){
            money = money-req_money1;
            *nnz = *nz;
            if (money > zero_cost_tot){
                money=money-zero_cost_tot;
                sandwiches+=1;
                *nnz=0;
                case_1();
                return;
            }else{
                return;
            }
        }else{
            return;
        }
    } else if (non_zero_count >= num_sandwich_zero){//here
        sandwiches+=num_sandwich_zero;
        money = money - num_sandwich_zero*zero_cost_tot;
        return;
    } else if (non_zero_count < num_sandwich_zero){
        money = money - non_zero_count*zero_cost_tot;
        sandwiches+=non_zero_count;
        *(nnz) = *(nnz) - non_zero_count*(*(nz));
        case2();
        return;
    }
}