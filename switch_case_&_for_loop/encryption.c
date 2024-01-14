// Enforcing Privacy with Cryptography (Encryption)

#include <stdio.h>
int main()
{
    int digit = 9876;  // try  4567
    int rem;
    int orig;
    int arr[4];
    int i=0;
    int encrypt;

    orig = digit;

    while(digit > 0)
    {
        rem =  digit % 10;
        rem = (rem+7) % 10;
        arr[i] = rem;
        digit /= 10;
        i++;
    }
    // swaping digits 
    encrypt = (arr[3] * 10) + (arr[2] * 1) +  (arr[1] * 1000) +  (arr[0] * 100);
    printf("Original %d \nEncrypted digit %d\n",orig,encrypt);
    return 0;
}