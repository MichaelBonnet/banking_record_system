#ifndef __HOME_H
#define __HOME_H

class Home: public Loan
{
	private:
		int bedrooms;
		int bathrooms;
		int square_footage;
		char address[30];

	public:
		// Setter Methods
		void set_bedrooms();
		void set_bathrooms();
		void set_square_footage();
		void set_address();

		// Getter Methods
		void get_bedrooms();
		void get_bathrooms();
		void get_square_footage();
		void get_address();
}

#endif