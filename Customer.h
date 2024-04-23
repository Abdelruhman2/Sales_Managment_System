#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>

using namespace std;

class Customer
{
public:
    Customer();
    ~Customer();
    int id;
    string phone;

    friend std::ostream& operator<<(std::ostream& out,  Customer& c );
    friend std::istream& operator>>(std::istream& in,  Customer& c );
protected:
virtual void print(ostream &out);
virtual void readstream(istream& in)=0;

private:

};

#endif // CUSTOMER_H
