#ifndef PASIEN_H
#define PASIEN_H

#include <string>

class Pasien {
private:
    std::string idPasien;
    std::string nama;
    int umur;
    std::string jenisKelamin;
    std::string alamat;
    std::string nomorTelepon;

public:
    Pasien(std::string idPasien, std::string nama, int umur, std::string jenisKelamin,
           std::string alamat, std::string nomorTelepon);

    std::string getIdPasien() const;
    std::string getNama() const;
    int getUmur() const;
    std::string getJenisKelamin() const;
    std::string getAlamat() const;
    std::string getNomorTelepon() const;

    std::string toString() const;
};

#endif 
