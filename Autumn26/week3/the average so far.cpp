#include <iostream>

//reads integer from user, stops if x = 0
//sums each new number and calculates a rolling average. x=0 will cause a break

int main(){
    int n = -1, counter = 0; 
    double avg = 0, sum = 0;
    bool control = true;
    while(control){
        std::cout << "Enter a number:" << std::endl;
        std::cin >> n;
        if(n == 0){
            control = false;
        }
        else{
            counter = counter + 1;
            sum = (sum + n);
            avg = (sum/counter);
            std::cout << "Current average is:" << std::endl;
            std::cout << avg << std::endl;
            
        }
    }
}