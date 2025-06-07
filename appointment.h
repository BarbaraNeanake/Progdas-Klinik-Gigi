#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>

class Appointment {
private:
    std::string idAppointment;
    std::string idPasien;
    std::string idDokter;
    std::string tanggal;
    std::string jam;

public:
    Appointment(std::string idAppointment, std::string idPasien, std::string idDokter,
                std::string tanggal, std::string jam);

    std::string getIdAppointment() const;
    std::string getIdPasien() const;
    std::string getIdDokter() const;
    std::string getTanggal() const;
    std::string getJam() const;

    std::string toString() const;
};

#endif
