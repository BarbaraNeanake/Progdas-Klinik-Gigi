#include "KlinikGigi.h"
#include <iostream>
#include <fstream>
#include <sstream>

void KlinikGigi::addPasien(const Pasien& pasien) {
    daftarPasien.push_back(pasien);
}

void KlinikGigi::addDokter(const Dokter& dokter) {
    daftarDokter.push_back(dokter);
}

void KlinikGigi::addAppointment(const Appointment& appointment) {
    daftarAppointment.push_back(appointment);
}

void KlinikGigi::showAllPasien() const {
    std::cout << "== Daftar Pasien ==\n";
    for (const auto& p : daftarPasien) {
        std::cout << p.toString() << "\n";
    }
}

void KlinikGigi::showAllDokter() const {
    std::cout << "== Daftar Dokter ==\n";
    for (const auto& d : daftarDokter) {
        std::cout << d.toString() << "\n";
    }
}

void KlinikGigi::showAllAppointment() const {
    std::cout << "== Daftar Appointment ==\n";
    for (const auto& a : daftarAppointment) {
        std::cout << a.toString() << "\n";
    }
}

void KlinikGigi::loadPasien() {
    daftarPasien.clear();
    std::ifstream file("database/pasien.txt");
    std::string line;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string id, nama, gender, alamat, noHp, umurStr;
        int umur;

        std::getline(ss, id, '|');
        std::getline(ss, nama, '|');
        std::getline(ss, umurStr, '|');
        umur = std::stoi(umurStr);
        std::getline(ss, gender, '|');
        std::getline(ss, alamat, '|');
        std::getline(ss, noHp, '|');

        daftarPasien.push_back(Pasien(id, nama, umur, gender, alamat, noHp));
    }

    file.close();
}

void KlinikGigi::savePasien() const {
    std::ofstream file("database/pasien.txt");
    for (const auto& p : daftarPasien) {
        file << p.getIdPasien() << "|"
             << p.getNama() << "|"
             << p.getUmur() << "|"
             << p.getJenisKelamin() << "|"
             << p.getAlamat() << "|"
             << p.getNomorTelepon() << "\n";
    }
    file.close();
}

void KlinikGigi::loadDokter() {
    daftarDokter.clear();
    std::ifstream file("database/dokter.txt");
    std::string line;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string id, nama, spesialisasi, jadwal;

        std::getline(ss, id, '|');
        std::getline(ss, nama, '|');
        std::getline(ss, spesialisasi, '|');
        std::getline(ss, jadwal, '|');

        daftarDokter.push_back(Dokter(id, nama, spesialisasi, jadwal));
    }

    file.close();
}

void KlinikGigi::saveDokter() const {
    std::ofstream file("database/dokter.txt");
    for (const auto& d : daftarDokter) {
        file << d.getIdDokter() << "|"
             << d.getNama() << "|"
             << d.getSpesialisasi() << "|"
             << d.getJadwalPraktik() << "\n";
    }
    file.close();
}

void KlinikGigi::loadAppointment() {
    daftarAppointment.clear();
    std::ifstream file("database/appointment.txt");
    std::string line;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string id, idPasien, idDokter, tanggal, jam;

        std::getline(ss, id, '|');
        std::getline(ss, idPasien, '|');
        std::getline(ss, idDokter, '|');
        std::getline(ss, tanggal, '|');
        std::getline(ss, jam, '|');

        daftarAppointment.push_back(Appointment(id, idPasien, idDokter, tanggal, jam));
    }
    file.close();
}

void KlinikGigi::saveAppointment() const {
    std::ofstream file("database/appointment.txt");
    for (const auto& a : daftarAppointment) {
        file << a.getIdAppointment() << "|"
             << a.getIdPasien() << "|"
             << a.getIdDokter() << "|"
             << a.getTanggal() << "|"
             << a.getJam() << "\n";
    }
    file.close();
}

