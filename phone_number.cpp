#include "phone_number.h"
#include <sstream>

PhoneNumber::PhoneNumber(const string &international_number){
	istringstream in_number(international_number);
	in_number.ignore(1);
	getline(in_number, country_code_, '-');
	getline(in_number, city_code_, '-');
	getline(in_number, local_number_);

}

string PhoneNumber::GetCountryCode() const {
	return country_code_;
}

string PhoneNumber::GetCityCode() const{
	return city_code_;
}

string PhoneNumber::GetLocalNumber() const {
	return local_number_;
}

string PhoneNumber::GetInternationalNumber() const {
	return "+" + country_code_ + "-" + city_code_ + "-" + local_number_;
}




