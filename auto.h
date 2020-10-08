#ifndef __AUTO_H
#define __AUTO_H

class Auto: public Loan
{
	private:
		char make[10];
		char model[10];
		int year;

	public:
		// Setter methods
		void set_make();
		void set_model();
		void set_year();

		// Getter methods
		void get_make();
		void get_model();
		void get_year();
}

#endif