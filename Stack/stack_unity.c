#include "unity/unity.h"
#include "stack.h"
void* ptr = NULL;

void setUp() {}


void tearDown() {}

void test_stack_creation()
{
    ptr = create_stack(3);
    TEST_ASSERT_NOT_EQUAL(NULL, ptr);
}

void test_stack_push()
{
    TEST_ASSERT_NOT_EQUAL(SUCCESS, push(ptr, 1));
    TEST_ASSERT_NOT_EQUAL(SUCCESS, push(ptr, 2));
    TEST_ASSERT_NOT_EQUAL(SUCCESS, push(ptr, 3));
    TEST_ASSERT_NOT_EQUAL(STACK_FULL, push(ptr, 4));
}

int main(void)
{
  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();

  /* Run Test functions */
  RUN_TEST(test_stack_creation);
  RUN_TEST(test_stack_push);
  /* Close the Unity Test Framework */
  return UNITY_END();
}