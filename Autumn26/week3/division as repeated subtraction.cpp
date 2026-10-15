#include <iostream>


// division by repeated subtraction, take dividend and divisor from user
// subtract divisor from dividend until dividend < 0 
// keep a counter that tracks number of divisors subtracted, once dividend < 0
// then counter - 1 = quotient and find remainder
// remainder = dividend - quotient*divisor 
int main(){
    int counter = 0, dividend = 0, divisor = 0;
    int quotient, remainder, result = 0;
    std::cout << "Enter dividend" << std::endl;
    std::cin >> dividend;
    std::cout << "Enter divisor" << std::endl;
    std::cin >> divisor;
    result = dividend;
    if(divisor == 0){
        std::cout << "Quotient = Quote on quote Infinity, can't divide by zero.";
    }
    while(result > dividend){
        result = (result - divisor);
        counter = (counter + 1);
    }
    quotient = (counter - 1);
    remainder = (dividend - (quotient * divisor));
    std::cout << "Quotient = " << quotient << std::endl;
    std::cout << "Remainder = " << remainder << std::endl;
}

//finish later... doesnt quite work yet.