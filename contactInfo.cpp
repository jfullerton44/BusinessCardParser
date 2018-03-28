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
  if(name=="")
    return "Name not found";
  return name;
}

string ContactInfo::getPhoneNumber(){
  if(phoneNumber=="")
    return "Phone Number not found";
  return phoneNumber;
}

string ContactInfo::getEmailAddress(){
  if(emailAddress=="")
    return "Email Address not found";
  return emailAddress;
}

