#include <iostream>
using namespace std;

class Barang{
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void dataBarang(){
        cout << "Nama Barang: " << nama << endl;
        cout << "Jumlah: " << jumlah << endl;
        cout << "Kategori: " << kategori << endl;
        cout << "Tanggal Produksi: " << tanggalProduksi << endl;
    }
};

int main(){
    Barang elektronik;
    elektronik.nama = "Console";
    elektronik.jumlah = 67;
    elektronik.kategori = "Sedang";
    elektronik.tanggalProduksi = "07-01-2023";

    Barang nonElektronik;
    nonElektronik.nama = "Bola";
    nonElektronik.jumlah = 30;
    nonElektronik.kategori = "Alat Olahraga";
    nonElektronik.tanggalProduksi = "06-07-2008";

    elektronik.dataBarang();
    nonElektronik.dataBarang();
}