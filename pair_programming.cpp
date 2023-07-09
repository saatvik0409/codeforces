#include <iostream>

int main(){

    int test_cases{};
    int m_len {};
    int n_len {};
    int initial_lines {};
    int value {};

    std::cin >> test_cases;

    for (size_t i {};i < test_cases;i++){
        
        bool is_possible {true};

        std::cin >> initial_lines;
        std::cin >> m_len;
        std::cin >> n_len;

        int m_arr[m_len+1] {};
        int n_arr[n_len+1] {};

        for (size_t j {};j<m_len;j++){
            std::cin >> value;
            m_arr[j] = value;
        }

        for (size_t j {};j<n_len;j++){
            std::cin >> value;
            n_arr[j] = value;
        }        

        int fin_array[m_len+n_len] {};
        int num_lines {initial_lines};

        m_arr[m_len] = 301;
        n_arr[n_len] = 301;

        int m{};
        int n{};
        int fin_index{};

        while (m<m_len || n<n_len){
            //std::cout << "m_arr[m] : " << m_arr[m]<< std::endl;
            //std::cout << "n_arr[n] : " << n_arr[n] << std::endl;
            if (m_arr[m] == 0){
                num_lines+=1;
                m+=1;
                fin_array[fin_index] = 0;
                fin_index+=1;

            }else if(n_arr[n] == 0){
                num_lines+=1;
                n+=1;
                fin_array[fin_index] = 0;
                fin_index+=1;

            }else if (m_arr[m] > 0 && m_arr[m]<=num_lines){
                fin_array[fin_index] = m_arr[m];
                m+=1;
                fin_index+=1;

            }else if (n_arr[n] > 0 && n_arr[n]<=num_lines){
                fin_array[fin_index] = n_arr[n];
                fin_index+=1;
                n+=1;

            }else{
                is_possible = false;
                break;
            }
        }
        if (!is_possible){
            std::cout << "-1" << std::endl;
        }else{
            for (int j {}; j<m_len+n_len;j++){
                std::cout << fin_array[j] << " ";
            }
            std::cout << std::endl;
        }

    }

    return 0;
}