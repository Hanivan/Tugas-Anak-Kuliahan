#include <stdio.h>

int main() {
  int L[20], temp, i, j, n = 6, idx;
  printf("Masukkan 6 Element : \n");

  for (i = 0; i < n; i++) {
    printf("Masukkan Bilangan : ");
    scanf("%d", &L[i]);
  }

  printf("\nSebelum di sorting : ");
  for (i = 0; i < n; i++) {
    printf("%d ", L[i]);
  }

  for (i = 0; i < (n - 1); i++) {
    idx = i;
    for (j = i + 1; j < n; j++) {
      if (L[j] < L[idx]) {
        idx = j;
      }
    }
    temp = L[i];
    L[i] = L[idx];
    L[idx] = temp;
  }

  printf("\nSetelah Sorting : ");
  for (i = 0; i < n; i++) {
    printf("%d ", L[i]);
  }

  printf("\n");

  printf("Kel");

  return 0;
}
