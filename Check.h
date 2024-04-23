#ifndef CHECK_H
#define CHECK_H
#include <string>
#include "Payment.h"
using namespace std;

class Check : public Payment
{
    public:
        Check();
        ~Check();
        string Name;
        string Bank_ID;
        void pay();

    protected:

    private:
};

#endif // CHECK_H
