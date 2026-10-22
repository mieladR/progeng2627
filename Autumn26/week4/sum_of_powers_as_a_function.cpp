#include <iostream>

int mypow(int x, int n){
    int sum = x;
    int counter = n;
    /// x + x^2 + ... + x^n
    while(counter > 1){
        sum = sum + x^counter;
        counter--;
    }
    return sum;
}

int main(){
    int x;
    int n;
    std::cout << "please enter x" << std::endl;
    std::cin >> x;
    std::cout << "please enter number n" << std::endl;
    std::cin >> n;
    std::cout << "here is the result of the sum: " << mypow(x,n) << std::endl;

}

/// finish later.. logic flawed