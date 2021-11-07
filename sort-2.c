#include <stdio.h>

int main() {
  int L[15], temp, i, j, n = 15, idx;

  printf("========== PERTEMUAN 2 ==========\n");

  printf("Harap Masukkan 15 NIM\n");

  for (i = 0; i < n; i++) {
    printf("Masukkan NIM Ke-%d: ", i + 1);
    scanf("%d", &L[i]);
  }

  printf("\nKelompok Satu: ");
  for (i = 0; i < n; i++) {
    if (L[i] % 2 == 0)
      printf("%d ", L[i]);
  }

  printf("\nKelompok Dua: ");
  for (j = 0; j < n; j++) {
    if (L[j] % 2 != 0) {
      printf("%d ", L[j]);
    }
  }
  return 0;
}
