#ifndef CREDIT_H
#define CREDIT_H
#include <string>
#include "Payment.h"
using namespace std;

class Credit : public Payment
{
    public:
        Credit();
        ~Credit();
        string Number;
        string type;
        string Expire_Date;
        void pay();


    protected:

    private:
};

#endif // CREDIT_H
