#include <iostream>

int main() {

  int jumlahPesanan, i;
  char loopPesan, loopProgram, kode[6] = {'D', 'd', 'P', 'p', 'S', 's'},
                               *ket[6];
  float banyakPotong[6], jumlahHarga, hargaSatuan[6], jumlahBeli[6], pajak,
      totalHarga[6], totalBayar = 0;

  do {
    std::cout << "GEROBAK FRIED CHICKEN" << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "Kode\t Jenis\t Harga" << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "D\t Dada\t Rp. 2500" << std::endl;
    std::cout << "P\t Paha\t Rp. 2000" << std::endl;
    std::cout << "S\t Sayap\t Rp. 1500" << std::endl;
    std::cout << "--------------------------" << std::endl;

    // Meminta jumlah pesanan
    std::cout << "Masukkan jumlah pesanan: ";
    std::cin >> jumlahPesanan;

    // input perulangan data
    for (i = 1; i <= jumlahPesanan; i++) {
      std::cout << i << ". Masukkan pesanan[D/P/S]: ";
      std::cin >> kode[i];

      std::cout << "Jumlah barang dibeli: ";
      std::cin >> jumlahBeli[i];
    }

    for (i = 1; i <= jumlahPesanan; i++) {
      // Proses pencarian data
      if (kode[i] == 'd' || kode[i] == 'D') {
        ket[i] = "Dada";
        hargaSatuan[i] = 2500;
      } else if (kode[i] == 'p' || kode[i] == 'P') {
        ket[i] = "Paha";
        hargaSatuan[i] = 2000;
      } else if (kode[i] == 's' || kode[i] == 'S') {
        ket[i] = "Sayap";
        hargaSatuan[i] = 1500;
      } else {
        std::cout << "Maaf kode yang anda masukkan salah" << std::endl;
        hargaSatuan[i] = 0;
      }
    }

    // Tampilkan hasil
    std::cout << "GEROBAK FRIED CHICKEN" << std::endl;
    std::cout << "-------------------------------------------------------------"
                 "--------"
              << std::endl;
    std::cout << "No\t Jenis Potong\t Harga Satuan\t Banyak Beli\t Jumlah Harga"
              << std::endl;

    for (i = 1; i <= jumlahPesanan; i++) {
      // Jumlahkan Total Barang
      totalHarga[i] = jumlahBeli[i] * hargaSatuan[i];
      totalBayar += totalHarga[i];

      std::cout << i << ".\t " << ket[i] << "\t\t"
                << "Rp. " << hargaSatuan[i] << "\t\t" << jumlahBeli[i] << "\t"
                << "Rp. " << totalHarga[i] << std::endl;
    }
    std::cout << "-------------------------------------------------------------"
                 "--------"
              << std::endl;

    std::cout << "Total keseluruhan harga barang: Rp. " << totalBayar
              << std::endl;

    pajak = totalBayar * 10 / 100;
    totalBayar += pajak;
    std::cout << "Pajak 10%: Rp. " << pajak << std::endl;
    std::cout << "Total yang harus dibayar: Rp. " << totalBayar << std::endl;

    std::cout << "Ulangi lagi?(y/n) ";
    std::cin >> loopProgram;
  } while (loopProgram == 'y' || loopProgram == 'Y');
  std::cout << "Terima kasih telah memesan" << std::endl;

  return 0;
}
