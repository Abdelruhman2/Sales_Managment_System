#ifndef CASH_H
#define CASH_H
#include "Payment.h"
#include <string>
using namespace std;

class Cash : public Payment
{
    public:
        Cash();
        ~Cash();
        double Cash_Value;
        void pay();

    protected:

    private:
};

#endif // CASH_H
