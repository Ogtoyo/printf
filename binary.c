#include "main.h"

int printf_binary(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    int count = 0, zero = 1, i, bit;

    if (num == 0)
    {
        _putchr('0');
        return (1);
    }


    for (i = (sizeof(num)*8 - 1); i >= 0; i--)
    {
        bit = (num >> i) & 1;

        if (bit == 1)
        {
            zero = 0;
        }
        if (zero == 0)
        {
            _putchr('0' + bit);
            count++;
        }
    }

    return (count);

}