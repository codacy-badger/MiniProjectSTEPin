#include "conversion.h"
#include "unity.h"
/**
 * @brief Set the Up object
 * Required by the unity test framework
 */
void setUp() {}

/**
 * @brief Release the objects that are setup for tests
 * Required by the unity test framework
 */
void tearDown() {}

/**
 * @brief Test null inputs
 * 
 */
void test_null_inputs(void)
{
    
    char* from_currency = " ";
    char* to_currency = " ";
    double* Amount = 0;

    TEST_ASSERT_EQUAL(NULL_PTR, convert(NULL, NULL, to_currency));
    TEST_ASSERT_EQUAL(NULL_PTR, convert(NULL, from_currency, NULL));
    TEST_ASSERT_EQUAL(NULL_PTR, convert(Amount, NULL, NULL));
    TEST_ASSERT_EQUAL(NULL_PTR, convert(NULL, NULL, NULL));

}
// checking for invalid inputs
void test_invalid_inputs(void)
{
    
    char from_currency1[5] = "USA";
    char to_currency1[5] = "INR";
    char from_currency2[5] = "USD";
    char to_currency2[5] = "IND";
    double Amount = 78;

    TEST_ASSERT_EQUAL(NULL_PTR, convert(&Amount, from_currency1, to_currency1));
    TEST_ASSERT_EQUAL(NULL_PTR, convert(&Amount, from_currency2, to_currency2));
    TEST_ASSERT_EQUAL(NULL_PTR, convert(&Amount, from_currency1, to_currency2));
    
    

}
// checking for valid inputs
void test_valid_inputs(void)
{
    
    char from_currency1[5] = "USD";
    char to_currency1[5] = "INR";
    char from_currency2[5] = "EUR";
    char to_currency2[5] = "JPY";
    double Amount = 76.55;

    TEST_ASSERT_NOT_EQUAL(NULL_PTR, convert(&Amount, from_currency1, to_currency1));
    TEST_ASSERT_NOT_EQUAL(NULL_PTR, convert(&Amount, from_currency2, to_currency2));
    TEST_ASSERT_NOT_EQUAL(NULL_PTR, convert(&Amount, from_currency1, to_currency2));
    TEST_ASSERT_NOT_EQUAL(NULL_PTR, convert(&Amount, from_currency2, to_currency1));
    
    

}



int main(void)
{
  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();

  /* Run Test functions */
  RUN_TEST(test_null_inputs);
  RUN_TEST(test_invalid_inputs);
  RUN_TEST(test_valid_inputs);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}