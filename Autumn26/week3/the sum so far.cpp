#include <iostream>

//reads integer from user, stops if x = 0
//sums each new number and returns a running total. x=0 will cause a break

int main(){
    int n = -1, sum = 0; 
    bool control = true;
    while(control){
        std::cout << "Enter a number:" << std::endl;
        std::cin >> n;
        if(n == 0){
            control = false;
        }
        else{
            sum = (sum + n);
            std::cout << "Current sum is:" << std::endl;
            std::cout << sum << std::endl;
            
        }
    }
}