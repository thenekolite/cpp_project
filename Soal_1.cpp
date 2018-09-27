// Nama : Rizky Ramadhan
// NIM : 17102044
// Kelas : IF 5B

// andi.kumpulin@gmail.com

#include <iostream>
#include <vector>

// function untuk mendapatkan harga dari tempat wisata, berdasarkan tujuan dan paket.
int get_harga(std::string tujuan, std::string paket) {
    int harga_paket = 0;

    if(tujuan == "JGJ") {
        if(paket == "S") {
            harga_paket = 150000;
        } else if(paket == "K") {
            harga_paket = 500000;
        } else {
            harga_paket = 1000000;
        }
    } else if(tujuan == "SMR") {
        if(paket == "S") {
            harga_paket = 200000;
        } else if(paket == "K") {
            harga_paket = 700000;
        } else {
            harga_paket = 1300000;
        }
    } else {
        if(paket == "S") {
            harga_paket = 350000;
        } else if(paket == "K") {
            harga_paket = 1200000;
        } else {
            harga_paket = 2300000;
        }
    }
    return harga_paket;
}

// function untuk mendapatkan pajak (berapa persen) berdasarkan tujuan dan paket.
double get_pajak(std::string tujuan, std::string paket) {
    double pajak = 0.0;

    if(tujuan == "JGJ") {
        if(paket == "S") {
            pajak = 0.025;
        } else if(paket == "K") {
            pajak = 0.05;
        } else {
            pajak = 0.1;
        }
    } else if(tujuan == "SMR") {
        if(paket == "S") {
            pajak = 0.03;
        } else if(paket == "K") {
            pajak = 0.06;
        } else {
            pajak = 0.12;
        }
    } else {
        if(paket == "S") {
            pajak = 0.04;
        } else if(paket == "K") {
            pajak = 0.08;
        } else {
            pajak = 0.12;
        }
    }
    return pajak;
}

// function untuk mendapatkan tujuan berdasarkan kode tujuan.
std::string get_tujuan(std::string tujuan) {
    std::string my_tujuan = "";

    if(tujuan == "JGJ") {
        my_tujuan = "Jogjakarta";
    } else if(tujuan == "SMR") {
        my_tujuan = "Semarang";
    } else {
        my_tujuan = "Jakarta";
    }
    return my_tujuan;
}

// function untuk mendapatkan paket, bersarkan paket yang diinputkan.
std::string get_paket(std::string paket) {
    std::string my_paket = "";

    if(paket == "S") {
        my_paket =="Sendiri";
    } else if(paket == "K") {
        my_paket = "Keluarga";
    } else {
        my_paket = "Regu";
    }
    return my_paket;
}

int main() {

    // daftar variable yang digunakan
    std::string nama_petugas;
    std::string nama_pelanggan;
    std::string kode_tujuan;
    std::string kode_paket;
    std::string tanggal_keberangkatan;

    std::cout << "Agen Bus Sinar Cemerlang" << std::endl;
    std::cout << "\n------------------------\n" << std::endl;

    // input semua data
    std::cout << "Masukkan Nama Petugas : ";
    std::getline(std::cin, nama_petugas);

    std::cout << "Masukkan Nama Pelanggan : ";
    std::getline(std::cin, nama_pelanggan);

    std::cout << "Masukkan Kode Tujuan [JGJ, SMR, JKT] : ";
    std::getline(std::cin, kode_tujuan);

    std::cout << "Masukkan Kode Paket [S/K/R] : ";
    std::getline(std::cin, kode_paket);

    std::cout << "Masukkan Tanggal Keberangkatan : ";
    std::getline(std::cin, tanggal_keberangkatan);

    // mendapatkan hasil dengan cara memanggil function yang sudah dibuat
    int harga = get_harga(kode_tujuan, kode_paket);
    double pajak = get_pajak(kode_tujuan, kode_paket) * harga;
    int total_biaya = harga + pajak;

    // menampilkan hasil
    std::cout << "\n=========>> Struk Pembayaran <<=========" << std::endl;
    std::cout << "=====>> Agen Bus Sinar Cemerlang <<=====\n" << std::endl;

    std::cout << "------------------------------------------------\n" << std::endl;

    std::cout << "\tNama Petugas : " << nama_petugas << std::endl;
    std::cout << "\tNama Pelanggan : " << nama_pelanggan << std::endl;
    std::cout << "\tTanggal Keberangkatan : " << tanggal_keberangkatan << std::endl;

    std::cout << "\n------------------------------------------------\n" << std::endl;

    std::cout << "Tujuan\t: " << get_tujuan(kode_tujuan) << std::endl;
    std::cout << "Paket\t: " << get_paket(kode_paket) << std::endl;
    std::cout << "Harga\t: " << get_harga(kode_tujuan, kode_paket) << std::endl;
    std::cout << "Biaya Pajak : " << pajak << std::endl;
    std::cout << "Total Biaya : " << total_biaya << std::endl;

    return 0;
}




















