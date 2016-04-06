#include "countNumDigits.h"
#include "powerOfTen,h"
#include "print_number.h"

/* This function prints a number in decimal format */
void print_number(int n)
{
    int digit, numDigits, divisor, remainder;
    remainder = n;
    if (n < 0) {
        remainder = -n;
        print_char('-');
    }
    else if (n == 0) {
        print_char('0');
        return;
    }
    
    numDigits = countNumDigits(remainder);
    divisor = powerOfTen(numDigits - 1);
    
    for (;numDigits > 0; numDigits--) {
        digit = remainder / divisor;
        print_char('0' + digit);
        remainder -= (digit * divisor);
        divisor = divisor / 10;
    }
}