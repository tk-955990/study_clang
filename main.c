#include <stdio.h>
int main() {
  printf("Enter Nember of stages...\n");
  int stages;
  scanf("%d", &stages);
  for (int i = 1; i <= stages; i++) {
    for (int j = stages; j > i; j--) {
      printf(" ");
    }
    for (int k = 1; k <= i * 2 - 1; k++) {
      printf("*");
    }
    printf("\n");
  }
  printf("Hello WOrld!!\n");
  return 0;
}
