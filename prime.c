#include <stdio.h>
#include <stdbool.h>

bool checkPrime(int number) {
    bool isPrime = true;
    int divisor = 2;
    
    while (divisor < number) {
        int r = (number%divisor);
        if (r == 0) {
            isPrime = false;
            return false;
        }
        divisor = divisor + 1;
    }
    return true;
}


int main() {
    int number;

    printf("Enter a prime number: ");
    scanf("%d", &number);
    if (checkPrime(number)) {
        printf("The number %d is prime.\n", number);
    }
    else {
        printf("The number %d is not prime.\n", number);
    }
    return 0;
}