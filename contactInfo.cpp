//Jacob Fullerton, contactInfo.cpp
#include "contactInfo.h"
#include<string>
using namespace std;

ContactInfo::ContactInfo(){
  name="";
  phoneNumber="";
  emailAddress="";
}
ContactInfo::ContactInfo(string tname, string number, string eaddress){
  name = tname;
  phoneNumber = number;
  emailAddress = eaddress;
}

string ContactInfo::getName(){
  return name;
}

string ContactInfo::getPhoneNumber(){
  return phoneNumber;
}

string ContactInfo::getEmailAddress(){
  return emailAddress;
}

