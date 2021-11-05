#include <limits.h>
#include <math.h>
#include <stdio.h>

#define U_MIN   0
#define DIVISOR log(2)

/* print the ranges of the different types in C on your platform */
int main()
{

/*  LONG_MIN and LONG_MAX aren't returning the correct values and
 *  log() isn't returning the number of bytes for int and long int
 */

    float dividend;
    float quotient;

    dividend = log(UCHAR_MAX + 1);
    quotient = dividend / DIVISOR;

    /* char */
    printf("\n");
    printf("Signed char min:\t%11d\n", SCHAR_MIN);
    printf("Signed char max:\t%11d\n", SCHAR_MAX);
    printf("Unsigned char min:\t%11u\n", U_MIN);
    printf("Unsigned char max:\t%11u\n", UCHAR_MAX);
    printf("Bytes:\t\t\t%11.0f\n", quotient);

    dividend = log(USHRT_MAX + 1);
    quotient = dividend / DIVISOR;

    /* short int */
    printf("\n");
    printf("Signed short int min:\t%11d\n", SHRT_MIN);
    printf("Signed short int max:\t%11d\n", SHRT_MAX);
    printf("Unsigned short int min:\t%11u\n", U_MIN);
    printf("Unsigned short int max:\t%11u\n", USHRT_MAX);
    printf("Bytes:\t\t\t%11.0f\n", quotient);

    dividend = log(UINT_MAX + 1);
    quotient = dividend / DIVISOR;

    /* int */
    printf("\n");
    printf("Signed int min:\t\t%11d\n", INT_MIN);
    printf("Signed int max:\t\t%11d\n", INT_MAX);
    printf("Unsigned int min:\t%11u\n", U_MIN);
    printf("Unsigned int max:\t%11u\n", UINT_MAX);
    printf("Bytes:\t\t\t%11.0f\n", quotient);

    dividend = log(ULONG_MAX + 1);
    quotient = dividend / DIVISOR;

    /* long int */
    printf("\n");
    printf("Signed long int min:\t%11d\n", LONG_MIN);
    printf("Signed long int max:\t%11d\n", LONG_MAX);
    printf("Unigned long int min:\t%11u\n", U_MIN);
    printf("Unigned long int max:\t%11u\n", ULONG_MAX);
    printf("Bytes:\t\t\t%11.0f\n", quotient);

    return 0;
}
