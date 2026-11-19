#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    std::vector<int> stored;
    int n, x, i, j, s;
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
            stored.push_back(i);
        }
    }
    if(s == 0){
        std::cout << "There are 0 occurences of ";
        std::cout << s;
    }
    if(s != 0){
        std::cout << "There are ";
        std::cout << counter;
        std::cout << " occurence(s) of ";
        std::cout << s;
        std::cout << " at indices: " << std::endl;
        for(j=0; j<counter; j++){
            std::cout << (stored[j]) << std::endl;
        }
    }


    
}