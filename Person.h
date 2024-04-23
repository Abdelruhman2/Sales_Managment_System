#ifndef PERSON_H
#define PERSON_H
#include "Customer.h"
#include <string>
using namespace std;

class Person : public Customer
{
    public:
        Person();
        ~Person();
        void Write_File_Person();
        void Read_File_Person();
        string Billing_Address;
        string Full_Name;
        void Delete_person();
        void Edit_person();
    protected:
        Customer* customerpe;
virtual void readstream(istream& in);
virtual void print(ostream &out);
    private:

};

#endif // PERSON_H
