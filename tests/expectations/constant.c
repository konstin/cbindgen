#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#define BAR u8"hello world"

#define FOO 10

#define ZOM 3.14

typedef struct {
  int32_t x[FOO];
} Foo;

void root(Foo x);