
#ifndef UNTITLED4_VIP_PATIENT_H
#define UNTITLED4_VIP_PATIENT_H

#include "Patient.h"

class VIP_Patient: public Patient{
public:
    unsigned long long _cash;
    VIP_Patient(std::string firstName, std::string lastName, std::string patronymic, Date bornDate, State state, Gender gender, unsigned long long cash):Patient(firstName, lastName, patronymic, bornDate, state, gender), _cash(cash){

    }


};


#endif //UNTITLED4_VIP_PATIENT_H
