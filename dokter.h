#ifndef DOKTER_H
#define DOKTER_H

#include <string>

class Dokter {
private:
    std::string idDokter;
    std::string nama;
    std::string spesialisasi;
    std::string jadwalPraktik;

public:
    Dokter(std::string idDokter, std::string nama, std::string spesialisasi, std::string jadwalPraktik);

    std::string getIdDokter() const;
    std::string getNama() const;
    std::string getSpesialisasi() const;
    std::string getJadwalPraktik() const;

    std::string toString() const;
};

#endif
