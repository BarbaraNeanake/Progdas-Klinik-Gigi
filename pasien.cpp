#include "Pasien.h"
#include <sstream>

Pasien::Pasien(std::string idPasien, std::string nama, int umur, std::string jenisKelamin,
               std::string alamat, std::string nomorTelepon)
    : idPasien(idPasien), nama(nama), umur(umur), jenisKelamin(jenisKelamin),
      alamat(alamat), nomorTelepon(nomorTelepon) {}

std::string Pasien::getIdPasien() const { return idPasien; }
std::string Pasien::getNama() const { return nama; }
int Pasien::getUmur() const { return umur; }
std::string Pasien::getJenisKelamin() const { return jenisKelamin; }
std::string Pasien::getAlamat() const { return alamat; }
std::string Pasien::getNomorTelepon() const { return nomorTelepon; }

std::string Pasien::toString() const {
    std::ostringstream oss;
    oss << "ID: " << idPasien
        << ", Nama: " << nama
        << ", Umur: " << umur
        << ", Jenis Kelamin: " << jenisKelamin
        << ", Alamat: " << alamat
        << ", No. HP: " << nomorTelepon;
    return oss.str();
}
