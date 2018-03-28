#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>
#include"BusinessCardParser.h"
#include"contactInfo.h"


using namespace std;

int main(int argc, char* argv[]) {
  //Checks to see if the number of command line parameters are correct
    if(argc!=2){
        cout<<"Incorrect Input, Input should be the name of a text file."<<endl;
    }
    //Gets the filename from the command line parameter
    string filename(argv[1]);
    //Creates a ContactInfo object using the input file
    ContactInfo output = getContactInfo(argv[1]);

    //Prints out the information from the business card
    cout<<"Name: "<<output.getName()<<endl;
    cout<<"Phone Number: "<<output.getPhoneNumber()<<endl;
    cout<<"Email Address: "<<output.getEmailAddress()<<endl;
    return 0;
}
