/*
 * Fancier: Unified Java, JNI and OpenCL Integration High-Performance GPGPU API.
 * Copyright (C) 2021 Universidad de La Laguna.
 *
 * Fancier is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Fancier is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Fancier.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef _MINUNIT_H_
#define _MINUNIT_H_

#include <stdio.h>

int tests_run;
int tests_successful;

#define BEGIN_TESTS()     \
  do {                    \
    tests_run = 0;        \
    tests_successful = 0; \
  } while (0)

#define END_TESTS()                                                    \
  do {                                                                 \
    printf("\n- %d/%d tests passed\n\n", tests_successful, tests_run); \
    if (tests_successful == tests_run)                                 \
      return 0;                                                        \
    else                                                               \
      return 1;                                                        \
  } while (0)

#define RUN_TEST(func, ...)                           \
  do {                                                \
    ++tests_run;                                      \
    printf("\n- Test #%d (%s):\n", tests_run, #func); \
    if (func(__VA_ARGS__) == 0)                       \
      ++tests_successful;                             \
  } while (0)

#define TEST_PASSED() return 0

#define TEST_ASSERT(desc, expr)        \
  do {                                 \
    if (expr) {                        \
      printf("  - [PASS] %s\n", desc); \
    }                                  \
    else {                             \
      printf("  - [FAIL] %s\n", desc); \
      return -1;                       \
    }                                  \
  } while (0)

#define TEST_ASSERT_EQ(desc, expr1, expr2) TEST_ASSERT(desc, (expr1) == (expr2))
#define TEST_ASSERT_NE(desc, expr1, expr2) TEST_ASSERT(desc, (expr1) != (expr2))
#define TEST_ASSERT_GT(desc, expr1, expr2) TEST_ASSERT(desc, (expr1) > (expr2))
#define TEST_ASSERT_GE(desc, expr1, expr2) TEST_ASSERT(desc, (expr1) >= (expr2))
#define TEST_ASSERT_LT(desc, expr1, expr2) TEST_ASSERT(desc, (expr1) < (expr2))
#define TEST_ASSERT_LE(desc, expr1, expr2) TEST_ASSERT(desc, (expr1) <= (expr2))

#endif  // _MINUNIT_H_
