/**
 * @file bottomfib.cpp
 * @author Josh Borthick (github.com/joshb019919)
 * @brief Calculate fibonacci from the bottom up.
 * @version 1.0
 * @date 2022-02-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "bottomfib.h"

/**
 * @brief Calculate fibonacci dynamically using tabulation
 *
 * Swap values each iteration.
 *
 * @param n The number in the fibonacci series to which to calculate.
 * @return int The calculated number.
 */
int BottomUpDynamicCalculator::fib(int n) const
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    int prev_fib = 1;
    int curr_fib = 1;
    int new_fib;

    for (int i = 0; i < n - 1; i++)
    {
        new_fib = prev_fib + curr_fib;
        prev_fib = curr_fib;
        curr_fib = new_fib;
    }

    return curr_fib;
}
