#include <stdio.h>

void throws() {
  printf("Throwing int\n");
  throw 16;
};

void callsthrows() {
  try {
    throws();
  } catch (...) {
    printf("Caught something, rethrowing...\n");
    throw;
  }
}

int main() {
  try {
    callsthrows();
  } catch (int i) {
    printf("Caught int: %d\n", i);
    return i-16;
  }
  return 1;
}
