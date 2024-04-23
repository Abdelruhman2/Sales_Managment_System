#ifndef PAYMENT_H
#define PAYMENT_H
#include <string>
#include "Order.h"
using namespace std;

class Payment
{
public:
    Payment();
    ~Payment();
    virtual void pay();
    void Update();
    int ID_Customer_Pay;
protected:

private:
    int paid_date;
    double amount;
};

#endif // PAYMENT_H
