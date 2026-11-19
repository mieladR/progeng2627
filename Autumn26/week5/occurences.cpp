#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int n, x, i, s = 0;
    std::cout << "Please enter n: ";
    std::cin >> n;
    for(i=0; i<n; i++){
        std::cout << "Please enter a number: ";
        std::cin >> x;
        v.push_back(x);
    }
    std::cout << "Please enter s: ";
    std::cin >> s;
    int counter = 0;
    for(i=0; i<v.size(); i++){
        if(v[i] == s){
            counter++;
        }
    }
    std::cout << "There are ";
    std::cout << counter;
    std::cout << " occurences of ";
    std::cout << s;


}