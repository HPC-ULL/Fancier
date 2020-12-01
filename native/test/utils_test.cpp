#include <fancier/utils.h>

#include <sys/stat.h>

#include <fcntl.h>
#include <minunit.h>
#include <stdio.h>
#include <unistd.h>


typedef struct {
  uint8_t a;
  int64_t b;
  double c;
} TestStruct;

static int test_time() {
  uint64_t first = fcUtils_getCurrentTimeNs();

  // Time-consuming task
  volatile int v = 0;
  for (int i = 0; i < 10000; ++i) {
    for (int j = 0; j < 10000; ++j) {
      v += (i * j) / 2;
    }
  }

  uint64_t second = fcUtils_getCurrentTimeNs();
  uint32_t elapsed = fcUtils_getElapsedTimeUs(first);
  uint32_t elapsed2 = fcUtils_getElapsedTimeUs(first);

  TEST_ASSERT_GT("second > first", second, first);
  TEST_ASSERT_GT("elapsed > 0", elapsed, 0);
  TEST_ASSERT_GE("elapsed2 >= elapsed", elapsed2, elapsed);

  TEST_PASSED();
}

static int test_dir() {
  DIR* dir = fcUtils_createOpenDir("testdir");
  TEST_ASSERT_NE("create dir", dir, NULL);
  closedir(dir);

  dir = fcUtils_createOpenDir("testdir");
  TEST_ASSERT_NE("open existing dir", dir, NULL);
  closedir(dir);

  TEST_PASSED();
}

static int test_file() {
  int fd = fcUtils_createOpenFile("testdir/testfile", O_RDWR);
  TEST_ASSERT_GE("create file", fd, 0);
  close(fd);

  fd = fcUtils_createOpenFile("testdir/testfile", O_RDWR);
  TEST_ASSERT_GE("open existing file", fd, 0);
  close(fd);

  TEST_PASSED();
}

static int test_rw() {
  int fd = fcUtils_createOpenFile("testdir/testfile", O_RDWR);
  TEST_ASSERT_GE("create file", fd, 0);

  TestStruct s1, s2;
  s1.a = 45;
  s1.b = -23234;
  s1.c = 0.0005433;

  int rw = fcUtils_writeFileData(fd, (char*) &s1, sizeof(TestStruct));
  close(fd);
  TEST_ASSERT_EQ("write data", rw, 0);

  fd = fcUtils_createOpenFile("testdir/testfile", O_RDWR);
  TEST_ASSERT_GE("create file", fd, 0);

  rw = fcUtils_readFileData(fd, (char*) &s2, sizeof(TestStruct));
  close(fd);
  TEST_ASSERT_EQ("read data", rw, 0);

  TEST_ASSERT("compare data", s1.a == s2.a && s1.b == s2.b && s1.c == s2.c);

  TEST_PASSED();
}

int main(int argc, const char* argv[]) {
  BEGIN_TESTS();

  RUN_TEST(test_time);
  RUN_TEST(test_dir);
  RUN_TEST(test_file);
  RUN_TEST(test_rw);

  END_TESTS();
}
