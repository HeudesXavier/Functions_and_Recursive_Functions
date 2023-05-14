#include "mbed.h"

// Define the InterruptIn pins for the Joystick
InterruptIn up(A0);
InterruptIn down(A1);
InterruptIn left(A2);
InterruptIn right(A3);
InterruptIn center(D4);

// Initialize a DigitalOut pin to control an LED
DigitalOut led(LED1);

int main() {
    
    int n = 10;  // Compute first 10 terms of Fibonacci sequence

    int a = 0, b = 1, c;  // Initialize first two terms of sequence
    for (int i = 0; i <= n; i++) {  // Loop through first n terms
        printf("%d ", a);  // Print current term to console
        led = !led;  // Toggle LED on and off
        c = a + b;  // Compute next term
        a = b;  // Update previous terms
        b = c;
        wait(0.5);  // Delay for half a second
    }
    printf("\n");  // Print newline character to console

}


