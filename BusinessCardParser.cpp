//Jacob Fullerton, BusinessCardParser.cpp
#include "BusinessCardParser.h"
#include "contactInfo.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <vector>

using namespace std;
#include <regex>
BusinessCardParser::BusinessCardParser(){
}

ContactInfo getContactInfo(string document){
  string line;
  string name;
  string number;
  string address;
  bool foundName= false;
  regex phone("[0-9]{9,}"); //Regex expression for finding a phone number
  vector<string> inputs;
  int position; //holds position of @ symbol in email address
  
  ifstream file(document.c_str());
  if(file.is_open()){
     while(getline(file,line)){
    
       if(line.find("@") != string::npos){//Uses the @ to identify email addresses
	  address=line;
	  position =(int) line.find("@");
	 }
       
       if(regex_match(line,phone)){//Uses a regex statement for finding numbers to find if a string is a phone number
	 line= regex_replace(line, regex("\\W+"), "");  //Replaces non-digit characters
	   number=line;
       }
       
     }
     
     //Resets back to the beginning of the file to do a second pass to find the name
     file.clear();
     file.seekg(0, ios::beg);
     
     //To find the Name I used the searched each line for groups of 3 characters from the email address
     //The only characters that are searched for are the characters before the @ sign as to not include the company name
     while(getline(file,line)){
       for(int i=0;i<position-3;i++){
	 if(line.find(address.substr(i,3)) != string::npos && !foundName && line.find("@") == string::npos){
	   name=line;
	   //if part of the email address matches the line the we can assume that it is the name
	   foundName=true;
	   //Since you dont want it to get overwritten by the email address this loop is stopped after a name is found
	   }
       }
     }
  } 
  else{
     cout<<"FILE NOT OPENED"<<endl;
  }
  ContactInfo temp(name,number,address);
  file.close();
  return temp;
}

