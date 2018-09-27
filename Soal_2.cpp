// Nama : Rizky Ramadhan
// NIM : 17102044
// Kelas : IF 5B

#include <iostream>

using namespace std;

// function untuk 'n' di bawah 10, jika n adalah 2 atau 6, maka 'isTrue'
// bernilai false yang artinya nanti tidak akan ikut dijumlahkan
bool dua_enam_puluhan(int nilai) {
    bool isTrue = true;
    if(nilai == 2 || nilai == 6) {
        isTrue = false;
    }
    return isTrue;
}

// function untuk 'n' di atas 10, di mana jika 'n' mengandung 2 atau 6, maka
// tidak akan disertakan / tidak dijumlahkan
bool mengandung_2_dan_6(int nilai) {
    bool isTrue = true;
    std::string nilai_instring = std::to_string(nilai);
    for(char c : nilai_instring) {
        if(c == '2' || c == '6') {
            isTrue = false;
            break;
        }
    }
    return isTrue;
}

// function untuk range 10 - 99, di mana jika hasil penjumlahannya adalah 9, maka
// tidak akan dijumlahkan / ditambahkan

// di sini, teknik yang digunakan adalah mengkonversi 'var nilai' yang merupakan int,
// menjadi string, kemudian kita tambahkan per index, jika totalnya sama dengan 9,
// maka nilai 'isTrue' adalah false, dengan kata lain, tidak akan dijumlahakan.
// saya menggunakan teknik ini untuk semua function di bawah

bool puluhan_satuan_9(int nilai) {
    bool isTrue = true;
    std::string nilai_instring = std::to_string(nilai);
    int total = 0;
    for(char c : nilai_instring) {
        char my_char[] = {c};
        std::string my_string = std::string(my_char);
        total += std::stoi(my_string);
    }
    if(total == 9) {
        isTrue = false;
    }
    return isTrue;
}

// function untuk range 100 - 999, di mana jika hasil penjumlahannya adalah 20, maka
// tidak akan dijumlahkan / ditambahkan
bool ratusan_puluhan_satuan_20(int nilai) {
    bool isTrue = true;
    std::string nilai_instring = std::to_string(nilai);
    int total = 0;
    for(char c : nilai_instring) {
        char my_char[] = {c};
        std::string my_string = std::string(my_char);
        total += std::stoi(my_string);
    }
    if(total == 20) {
        isTrue = false;
    }
    return isTrue;
}

// function untuk range 1000 - 9999, di mana jika hasil penjumlahannya adalah 18, maka
// tidak akan dijumlahkan / ditambahkan
bool ribuan_ratusan_puluhan_satuan_18(int nilai) {
    bool isTrue = true;
    std::string nilai_instring = std::to_string(nilai);
    int total = 0;
    for(char c : nilai_instring) {
        char my_char[] = {c};
        std::string my_string = std::string(my_char);
        total += std::stoi(my_string);
    }
    if(total == 18) {
        isTrue = false;
    }
    return isTrue;
}

int main() {

    // var untuk 'n' kali perulangan.
    int perulangan;

    //inputkan 'n'
    std::cout << "Masukkan 'n' perulangan : ";
    std::cin >> perulangan;

    // set total sama dengan 0
    int total = 0;

    // lakukan perulangan dari 1 sampai n
    // kemudian panggil function sesuai dengan range
    for(int i = 1; i <= perulangan; i++) {
        if(i < 10) {
            if(dua_enam_puluhan(i)) {
                std::cout << i << " ";
                total += i;
            }
        }
        if(i >= 10 && i < 100) {
            if(puluhan_satuan_9(i) && mengandung_2_dan_6(i)) {
                std::cout << i << " ";
                total += i;
            }
        }
        if(i >= 100 && i < 1000) {
            if(ratusan_puluhan_satuan_20(i) && mengandung_2_dan_6(i)) {
                std::cout << i << " ";
                total += i;
            }
        }
        if(i >= 1000 && i < 10000) {
            if(ribuan_ratusan_puluhan_satuan_18(i) && mengandung_2_dan_6(i)) {
                std::cout << i << " ";
                total += i;
            }
        }
    }

    // tampilkan total
    std::cout << "\nTotal : " << total << std::endl;

    return 0;
}
