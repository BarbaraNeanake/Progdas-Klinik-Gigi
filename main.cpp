#include <iostream>
#include "KlinikGigi.h"

int main() {
    KlinikGigi klinik;

    // ini buat ambil semua data dari file
    klinik.loadPasien();
    klinik.loadDokter();
    klinik.loadAppointment();

int pilihan;
    do {
        std::cout << "\n=== SISTEM MANAJEMEN KLINIK GIGI ===\n";
        std::cout << "Halo, selamat datang!\n";
        std::cout << "Project ini merupakan Final Project mata kuliah Pemrograman Dasar.\n";
        std::cout << "Dibuat oleh: Barbara & Grace\n\n";
        std::cout << "1. Tambah Pasien\n";
        std::cout << "2. Tambah Dokter\n";
        std::cout << "3. Buat Appointment\n";
        std::cout << "4. Lihat Semua Pasien\n";
        std::cout << "5. Lihat Semua Dokter\n";
        std::cout << "6. Lihat Semua Appointment\n";
        std::cout << "0. Keluar\n";
        std::cout << "Pilih: ";
        std::cin >> pilihan;
        std::cin.ignore();

        if (pilihan == 1) {
            std::string id, nama, gender, alamat, noHp;
            int umur;

            std::cout << "ID Pasien: ";
            std::getline(std::cin, id);
            std::cout << "Nama: ";
            std::getline(std::cin, nama);
            std::cout << "Umur: ";
            std::cin >> umur;
            std::cin.ignore();
            std::cout << "Jenis Kelamin: ";
            std::getline(std::cin, gender);
            std::cout << "Alamat: ";
            std::getline(std::cin, alamat);
            std::cout << "No HP: ";
            std::getline(std::cin, noHp);

            klinik.addPasien(Pasien(id, nama, umur, gender, alamat, noHp));
            klinik.savePasien();
        }
        else if (pilihan == 2) {
            std::string id, nama, spesialisasi, jadwal;

            std::cout << "ID Dokter: ";
            std::getline(std::cin, id);
            std::cout << "Nama: ";
            std::getline(std::cin, nama);
            std::cout << "Spesialisasi: ";
            std::getline(std::cin, spesialisasi);
            std::cout << "Jadwal Praktik: ";
            std::getline(std::cin, jadwal);

            klinik.addDokter(Dokter(id, nama, spesialisasi, jadwal));
            klinik.saveDokter();
        }
        else if (pilihan == 3) {
            std::string id, idPasien, idDokter, tanggal, jam;

            std::cout << "ID Janji: ";
            std::getline(std::cin, id);
            std::cout << "ID Pasien: ";
            std::getline(std::cin, idPasien);
            std::cout << "ID Dokter: ";
            std::getline(std::cin, idDokter);
            std::cout << "Tanggal (YYYY-MM-DD): ";
            std::getline(std::cin, tanggal);
            std::cout << "Jam (HH:MM): ";
            std::getline(std::cin, jam);

            klinik.addAppointment(Appointment(id, idPasien, idDokter, tanggal, jam));
            klinik.saveAppointment();
        }
        else if (pilihan == 4) {
            klinik.showAllPasien();
        }
        else if (pilihan == 5) {
            klinik.showAllDokter();
        }
        else if (pilihan == 6) {
            klinik.showAllAppointment();
        }
    } while (pilihan != 0);

    std::cout << "Terima kasih!\n";
    return 0;
}
