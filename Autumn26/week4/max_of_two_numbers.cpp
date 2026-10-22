#include <iostream>

int max_of_2_numbers(int A, int B){
    if(A>B){
        return A;
    }
    else{
        return B;
    }



}

int main(){
    int A;
    int B;
    std::cout << "please enter number A" << std::endl;
    std::cin >> A;
    std::cout << "please enter number B" << std::endl;
    std::cin >> B;
    std::cout << "Here is the bigger number: " << max_of_2_numbers(A,B) << std::endl;
}