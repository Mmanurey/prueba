#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int a[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; i++) {
      a[i][j] = atoi(argv[i + j + 1]);
      printf("%d", a[i][j]);
    }
    printf("\n");
  }

  return 0;
}
