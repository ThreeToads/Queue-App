#include <iostream>
#include "Patient.h"
#include "VIP_Patient.h"
#include "Queue.h"
#include "ServerFail/SServer.h"
int main() {
    Patient* mass = new Patient[10];
    Queue<Patient>* qee = new Queue<Patient>(2);



    Patient patient_base = Patient("A", "A", "A", Date{1, 12, 1980}, State::NORMAL, Gender::MALE);
    VIP_Patient patient_vip = VIP_Patient("A", "A", "A", Date{1, 12, 1980}, State::NORMAL, Gender::MALE, 1000);
    Patient patient_base1 = Patient ("A", "A", "A", Date{1, 12, 1980}, State::NORMAL, Gender::MALE);
    qee->Push(patient_base1);

    qee->Push(patient_base);
    qee->Push(patient_vip);
    qee->Print();
}
