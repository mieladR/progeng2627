#include <iostream>

int myfactorial(int in){
    int fact = in;
    int counter = (in-1);
    /// factorial calculation. n! = (n)*(n-1)*(n-2)*(n-3)*...*1 

    while(counter != 0){
        fact = fact * counter;
        counter--;
    }
    return fact;


}

int main(){
    int n;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;

}


