#ifndef CUSTOMERS_H
#define CUSTOMERS_H
#include <string>
#include "Customer.h"
#include "Order.h"
using namespace std;

class Customers
{
    public:
        Customers();
        ~Customers();
        void Add_Customer();
        void Write_file();
        void read_file();
        void Delete_Customer();
        void Edit_Customer();
        void print();

    protected:

Customer* customercu;
    private:
        int counter;
};

#endif // CUSTOMERS_H
