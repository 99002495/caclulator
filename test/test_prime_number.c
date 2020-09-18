#include "unity.h"
#include "prime_number.h"

//Required by the test unity framework
void setUp() {}

//Required by the unity framework
void tearDown() {}

void testing_prime_number(void)
{
    TEST_ASSERT_EQUAL(0, prime_number(6));
    TEST_ASSERT_EQUAL(0, prime_number(4));
    TEST_ASSERT_EQUAL(1, prime_number(3));
    TEST_ASSERT_EQUAL(1, prime_number(7));
}
void testing_forlarge_prime_number(void)
{
    TEST_ASSERT_EQUAL(0, prime_number(15));
    TEST_ASSERT_EQUAL(1, prime_number(17));
    TEST_ASSERT_EQUAL(1, prime_number(19));
}
int main(void)
{
    //Initiating the unity framework
    UNITY_BEGIN();
    RUN_TEST(testing_prime_number);
    RUN_TEST(testing_forlarge_prime_number);
    return UNITY_END();
}
