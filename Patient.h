//
// Created by ThreeToads on 13.03.2023.
//

#ifndef UNTITLED4_PATIENT_H
#define UNTITLED4_PATIENT_H
#include <iostream>



enum State{
    DISPANCER, NORMAL, CRITIC
};

enum Gender{
    MALE, FEMALE
};
enum ObjectType{
    VALID, NOT_VALID
};


struct Date{
    unsigned char day;
    unsigned char mount;
    unsigned short year;
};

class Patient {
private:
    Date _bornDate;
    std::string _firstName;
    std::string _lastName;
    std::string _patronymic;

    State _state;
    Gender _gender;
    ObjectType _patientType;
public:

    Patient(std::string firstName, std::string lastName, std::string patronymic, Date bornDate, State state, Gender gender): _firstName(firstName),
    _lastName(lastName), _patronymic(patronymic), _state(state), _gender(gender){
        _bornDate = bornDate;

        _patientType = ObjectType::VALID;
    }
    Patient(){
        _patientType = ObjectType::NOT_VALID;
    }

    const std::string &getFirstName() const {
        return _firstName;
    }

    const std::string &getLastName() const {
        return _lastName;
    }

    const std::string &getPatronymic() const {
        return _patronymic;
    }

    const Date &getBornDate() const {
        return _bornDate;
    }

    State getState() const {
        return _state;
    }

    Gender getGender() const {
        return _gender;
    }

    bool ISValidPatient() const {
        return _patientType == ObjectType::VALID;
    }


    friend std::ostream & operator<<(std::ostream& out, const  Patient& patient){
        out << patient._firstName <<" "<< patient._lastName <<" "<< patient._patronymic<< std::endl;
    }

};


#endif //UNTITLED4_PATIENT_H
