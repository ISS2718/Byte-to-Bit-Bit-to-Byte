#include <stdio.h>

int main()
{
    unsigned char data = 0b10100001; // value in binary
    char bin[8]; // Array for deocompose the byte in bits 
    unsigned char val = 0; // varieble for recompose de value
    
    
    printf("Value for decompose is: %d\n", data);
    
    for (char i = 0; i < 8; i++)
    {
        bin[i] = 0b00000001 & data >> i;
        printf("%d\n", bin[i]);
    }
    
    for (char i = 7; i > -1; i--)
    {
        val = bin[i] | val << 1;
    }
    
    printf("Value recomposed is: %d\n", val);
    return 0;
}
