#MakeFile
#Jacob Fullerton

CXX=clang++ -O2 -o ReadText

CXXFLAGS = -Wall

OFILES = main.o contactInfo.o BusinessCardParser.o

.SUFFIXES: .o .cpp

main: 	$(OFILES)
	$(CXX) $(OFILES)
clean:
	/bin/rm -f *.o *~

BusinessCardParser.o: BusinessCardParser.cpp BusinessCardParser.h \
  contactInfo.h
contactInfo.o: contactInfo.cpp contactInfo.h
main.o: main.cpp BusinessCardParser.h contactInfo.h
