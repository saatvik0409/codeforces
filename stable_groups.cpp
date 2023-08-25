#include <iostream>
#include <bits/stdc++.h>
#include <vector>
// class Node{
//     public: 
//         Node(long long long int data){
//             this->data = data;
//         }
//         long long long int data {};
//         Node* next {};
//         Node* prev {};
// };

// class LinkedList{
//     public:
//         Node* head {};
//         Node* tail {};
// };

int main(){

    long long int init_students {};
    long long int new_students {};
    long long int maximum_difference {};

    long long int value {};

    std::cin >> init_students;
    std::cin >> new_students;
    std::cin >> maximum_difference;

    long long int arr[init_students] {};

    for (long long int i {}; i < init_students;i++){
        std::cin >> value;
        arr[i] = value;
    }

    std::sort(arr,arr+init_students);

    long long int diff {};
    long long int num {};
    long long int total_gaps {};
    // LinkedList* linklist = new LinkedList;
    std::vector<long long int> fin_vec {};
    for (long long int i {1}; i < init_students;i++){
        diff = arr[i]-arr[i-1];
        if (diff > maximum_difference){
            diff = diff-1;
            num = diff/maximum_difference;
            fin_vec.push_back(num);
            total_gaps++;
        } 
    }
    std::sort(fin_vec.begin(), fin_vec.end());
    long long int fin_ans {total_gaps};
    long long int index {};
    while(new_students>0 && index < total_gaps){
        if (new_students>=fin_vec[index]){
            new_students-=fin_vec[index];
            index++;
            fin_ans--;
        }else{
            break;
        }
    }
    std::cout << fin_ans+1 << std::endl;

    return 0;
}