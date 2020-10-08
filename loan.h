#ifndef __LOAN_H
#define __LOAN_H

class Loan
{
	private:
		char loan_name[20];
		int associated_ID;
		int amount;

	public:
		// Setter Methods
		void set_name();
		void set_ID();
		void set_amount();

		// Getter Methods
		void get_name();
		void get_ID();
		void get_amount();
}

#endif