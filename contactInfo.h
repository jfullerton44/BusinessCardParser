//Jacob Fullerton, ContactInfo.h
#ifndef CONTACTINFO_H
#define CONTACTINFO_H
#include<string>

using namespace std;

class ContactInfo{
 public:
  ContactInfo();
  ContactInfo(string tname, string number, string eaddress);
  string getName();
  string getPhoneNumber();
  string getEmailAddress();

 private:
  string name,phoneNumber,emailAddress;
};

#endif
 
