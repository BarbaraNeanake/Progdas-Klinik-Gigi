#include "Dokter.h"
#include <sstream>

Dokter::Dokter(std::string idDokter, std::string nama, std::string spesialisasi, std::string jadwalPraktik)
    : idDokter(idDokter), nama(nama), spesialisasi(spesialisasi), jadwalPraktik(jadwalPraktik) {}

std::string Dokter::getIdDokter() const { return idDokter; }
std::string Dokter::getNama() const { return nama; }
std::string Dokter::getSpesialisasi() const { return spesialisasi; }
std::string Dokter::getJadwalPraktik() const { return jadwalPraktik; }

std::string Dokter::toString() const {
    std::ostringstream oss;
    oss << "ID: " << idDokter
        << ", Nama: " << nama
        << ", Spesialisasi: " << spesialisasi
        << ", Jadwal Praktik: " << jadwalPraktik;
    return oss.str();
}
