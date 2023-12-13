#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    // If the number is less than 2, it's not prime
    if (num < 2) {
        return false;
    }

    // Check for factors up to the square root of the number
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            // If the number is divisible by any smaller number, it's not prime
            return false;
        }
    }

    // If no factors are found, the number is prime
    return true;
}

int main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
