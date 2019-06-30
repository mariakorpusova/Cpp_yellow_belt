#include <iostream>
#include "phone_number.h"

int main(){
    PhoneNumber pn("+7-495-111-22-33");
    cout << pn.GetCountryCode() << endl;
    cout << pn.GetCityCode() << endl;
    cout << pn.GetLocalNumber() << endl;
    cout << pn.GetInternationalNumber() << endl;
}
