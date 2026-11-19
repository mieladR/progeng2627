#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int x, t, i, n = 0;
    std::cout << "How many numbers do you want to store in your vector? : ";
    std::cin >> n;
    for(i=0;i<n;i++){
        std::cout << "Enter the the next value for your vector : ";
        std::cin >> x;
        v.push_back(x);
    }
    std::cout << "Enter the value to compare to vector elements, values below will be printed : ";
    std::cin >> t;
    std::cout << "(These vector elements < your chosen value)" << std::endl;
    for(int i = 0; i< v.size(); i++){
        if(v[i] < t){
            std::cout << v[i] << std::endl;
        }
    }

}