#include <stdio.h>
#include <stdlib.h>

int compare_ints(const void *a, const void *b) {
  int arg1 = *(const int *)a;
  int arg2 = *(const int *)b;

  return arg1 < arg2 ? -1 : 1;
}

int main() {

  int ar[] = {15, 60, 61, 95, 46, 38, 68, 11, 47, 45, 27,  23, 3,  16, 8,
              81, 76, 63, 62, 57, 59, 22, 55, 78, 28, 54,  74, 39, 79, 65,
              48, 82, 17, 2,  98, 90, 18, 9,  56, 34, 7,   75, 10, 93, 35,
              5,  73, 77, 85, 71, 13, 91, 83, 70, 89, 4,   84, 14, 52, 99,
              53, 33, 49, 42, 40, 58, 30, 36, 67, 72, 41,  26, 87, 97, 25,
              29, 50, 64, 21, 88, 66, 24, 94, 51, 1,  100, 0,  96, 69, 12,
              92, 31, 37, 6,  86, 32, 19, 44, 20, 43};

  int size = sizeof ar / sizeof *ar;
  qsort(ar, size, sizeof(int), compare_ints);
  for (int i = 0; i < size; i++) {
    if (i != ar[i]) {
      printf("%d\n", i);

      break;
    }
  }
}
