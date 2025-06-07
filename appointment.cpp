#include "Appointment.h"
#include <sstream>

Appointment::Appointment(std::string idAppointment, std::string idPasien, std::string idDokter,
                         std::string tanggal, std::string jam)
    : idAppointment(idAppointment), idPasien(idPasien), idDokter(idDokter),
      tanggal(tanggal), jam(jam) {}

std::string Appointment::getIdAppointment() const { return idAppointment; }
std::string Appointment::getIdPasien() const { return idPasien; }
std::string Appointment::getIdDokter() const { return idDokter; }
std::string Appointment::getTanggal() const { return tanggal; }
std::string Appointment::getJam() const { return jam; }

std::string Appointment::toString() const {
    std::ostringstream oss;
    oss << "ID Janji: " << idAppointment
        << ", Pasien: " << idPasien
        << ", Dokter: " << idDokter
        << ", Tanggal: " << tanggal
        << ", Jam: " << jam;
    return oss.str();
}
