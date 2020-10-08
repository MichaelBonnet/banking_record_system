#ifndef __RECORD_H
#define __RECORD_H

#include <vector>
#include <string>
#include "loan.h"

class account_query
{
    private:
        char account_number[20]; // should probably be an int
        char firstName[10];
        char lastName[10];
        std::vector<Loan*> _loans;
        float total_Balance;

    public:
        void read_data();
        void show_data();
        void write_rec();
        void read_rec();
        void search_rec();
        void edit_rec();
        void delete_rec();
        String display_loans();
};

#endif