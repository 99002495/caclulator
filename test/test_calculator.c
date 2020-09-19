
#include "unity.h"
#include "calculator.h"
#include"math.h"



/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_calci_basic(void)
{
  TEST_ASSERT_EQUAL(9, calci(4,5,0));
  TEST_ASSERT_EQUAL(1, calci(6,-5,0));
  TEST_ASSERT_EQUAL(11, calci(6,-5,1));
  TEST_ASSERT_EQUAL(0, calci(6,6,1));
  TEST_ASSERT_EQUAL(30, calci(6,5,2));
  TEST_ASSERT_EQUAL(-30, calci(6,-5,2));
  TEST_ASSERT_EQUAL(1, calci(6,6,3));
  TEST_ASSERT_EQUAL(2, calci(12,6,3));
  TEST_ASSERT_EQUAL(3, calci(6,2,3));
}
void test_calci_sub(void)
{
  TEST_ASSERT_EQUAL(-7, calci(2,9,1));
  TEST_ASSERT_EQUAL(7, calci(9,2,1));
}
void test_mull(void)
{
  TEST_ASSERT_EQUAL(-25, calci(-5,5,2));
  TEST_ASSERT_EQUAL(0, calci(0,0,0));
}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_calci_basic);
  RUN_TEST(test_calci_sub);
  RUN_TEST(test_mull);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
