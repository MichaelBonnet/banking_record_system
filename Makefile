CXXFLAGS = --std=c++17

bank: main.o records.o loans.o *.h
	$(CXX) $(CXXFLAGS) main.o records.o loans.o -o bank

main.o: main.cpp *.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

records.o: records.cpp records.h
	$(CXX) $(CXXFLAGS) -c records.cpp -o records.o

loans.o: loans.cpp loans.h
	$(CXX) $(CXXFLAGS) -c loans.cpp -o loans.o

clean: 
	rm -f *.o *.gch ~* a.out bank
