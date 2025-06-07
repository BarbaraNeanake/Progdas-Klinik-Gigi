#ifndef KLINIKGIGI_H
#define KLINIKGIGI_H

#include <vector>
#include "Pasien.h"
#include "Dokter.h"
#include "Appointment.h"

class KlinikGigi {
private:
    std::vector<Pasien> daftarPasien;
    std::vector<Dokter> daftarDokter;
    std::vector<Appointment> daftarAppointment;

public:
    // Buat add data
    void addPasien(const Pasien& pasien);
    void addDokter(const Dokter& dokter);
    void addAppointment(const Appointment& appointment);

    // Buat tampilkan data
    void showAllPasien() const;
    void showAllDokter() const;
    void showAllAppointment() const;

    // File I/O
    void loadPasien();
    void savePasien() const;

    void loadDokter();
    void saveDokter() const;

    void loadAppointment();
    void saveAppointment() const;
};

#endif 
