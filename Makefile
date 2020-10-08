CXXFLAGS = --std=c++17

bank: main.o records.o loans.o *.h
	$(CXX) $(CXXFLAGS) main.o account_query.o loans.o -o bank

main.o: main.cpp *.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

accounts.o: account_query.cpp account_query.h
	$(CXX) $(CXXFLAGS) -c account_query.cpp -o account_query.o

loans.o: loans.cpp loans.h
	$(CXX) $(CXXFLAGS) -c loans.cpp -o loans.o

clean: 
	rm -f *.o *.gch ~* a.out bank
