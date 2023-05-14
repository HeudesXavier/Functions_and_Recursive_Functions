#include "mbed.h"

// Define the InterruptIn pins for the Joystick
InterruptIn up(A0);
InterruptIn down(A1);
InterruptIn left(A2);
InterruptIn right(A3);
InterruptIn center(D4);

// Initialize a DigitalOut pin to control an LED
DigitalOut led(LED1);

// Recursive function to compute the nth term of the Fibonacci sequence
int fibonacci(int n) {
    if (n == 0) {  // Base case for n = 0
        return 0;
    } else if (n == 1) {  // Base case for n = 1
        return 1;
    } else {  // Recursive case
        int prev1 = fibonacci(n - 1);
        int prev2 = fibonacci(n - 2);
        return prev1 + prev2;
    }
}

int main() {
    
    int n = 20;  // Compute first 10 terms of Fibonacci sequence

    for (int i = 0; i <= n; i++) {  // Loop through first n terms
        int fib = fibonacci(i);  // Compute the ith term of the sequence
        printf("%d ", fib);  // Print current term to console
        led = !led;  // Toggle LED on and off
        wait(0.5);  // Delay for half a second
    }
    printf("\n");  // Print newline character to console

}

