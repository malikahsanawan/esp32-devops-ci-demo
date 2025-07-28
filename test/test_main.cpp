#include <unity.h>

void test_addition() {
  TEST_ASSERT_EQUAL(2 + 2, 4);
}

void setup() {
  UNITY_BEGIN();
  RUN_TEST(test_addition);
  UNITY_END();
}

void loop() {}
