#include <stdio.h>
void	print_bits(unsigned char octet)
{
    /*int bits;
    int i = 7;
    while(i >= 0)
    {
        bits = (octet >> i & 1) + '0';
        write(1, &bits, 1);
        i--;
    }*/


    int i = 8;
    unsigned char bits;
    while(i--)
    {
        bits = (octet >> i & 1) + '0';
        write(1, &bits, 1);
    }
}