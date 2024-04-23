#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <string>
#include "Customer.h"
using namespace std;

class Transaction
{
public:
    Transaction();
    ~Transaction();
    void Get_Order();
   friend std::ostream& operator<<(std::ostream&, Transaction& t);
   string Transaction_Date;
   int ID_OF_Transction;
protected:

private:
    int id_person;
    int id_order;
    int id_company;
};

#endif // TRANSACTION_H
