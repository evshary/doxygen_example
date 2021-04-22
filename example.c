#include <stdio.h>

/**
 * @file
 * An example program for doxygen.
 */

/**
 * @mainpage
 * This is main page for doxygen example.
 *
 * GitHub URL: https://github.com/evshary/doxygen_example
 *
 * How to build try example
 *
 * @code
 * make clean
 * make
 * @endcode
 */

/**
 * @brief myadd
 *
 * This function will add two values and return the result.
 * Note that the values should be between 0 and 100.
 *
 * @param[in]  a My add value
 * @param[in]  b My add value
 *
 * @returns The error code.
 *
 * @retval 0
 *             Success operations
 * @retval -1
 *             There is negative value 
 * @retval -2
 *             The operation is invoked on an inappropriate object.
 */
int myadd(int a, int b, int *result) {
    if (a < 0 || b < 0) return -1;
    if (a > 100 || b > 100) return -2;
    *result = a + b;
    printf("myadd: %d+%d=%d\n", a, b, *result);
    return 0;
}

int myfunc2() {
    printf("myfunc2\n");
}

int main(void) {
    int result;
    printf("This is example\n");
    myadd(1, 2, &result);
    myfunc2();
    return 0;
}
