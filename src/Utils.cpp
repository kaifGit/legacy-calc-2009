#include "Utils.h"

/**
 * @brief Computes power of a number using a loop
 * @param base Base value
 * @param exponent Exponent value
 * @return base^exponent
 */
long double power(long double base, int exponent){
    long double result = 1.0;
    for(int i = 0; i < exponent; ++i){
        result *= base;
    }
    return result;
}
