#include <math.h>
#include "utest.h"
#include "fibonacci.h"

UTEST(fibonacci, terms_1_through_10) {
    const int expected[] = {
        1, 1, 2, 3, 5, 8, 13, 21, 34, 55
    };

    for (int term = 1; term <= 10; term++) {
        EXPECT_EQ(expected[term - 1], fibonacci(term));
    }
}

UTEST(golden_ratio, terms_1_through_10) {
    const double expected = 1.618033988749895;
    const double tolerance = 0.000000001;

    for (int term = 1; term <= 10; term++) {
        double actual = golden_ratio_approx(term);
        EXPECT_TRUE(fabs(actual - expected) < tolerance);
    }
}

UTEST_MAIN();