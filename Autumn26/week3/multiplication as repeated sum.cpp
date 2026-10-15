#include <iostream>

// acc = 0, n & x user input
// x*n = for n, acc = acc += x

int main(){
    double x, acc = 0;
    int n, counter = 0;
    std::cin >> x >> n;

    while(counter<n){
        acc = acc + x;
        counter = counter + 1;
    }
    std::cout << x << "*" << n << " = " << acc;



}