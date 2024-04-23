#ifndef ORDER_H
#define ORDER_H
#include <string>
#include "Product.h"
#include "Stock.h"
#include "Customer.h"
#include "Person.h"
#include "Campany.h"
#include "Customers.h"
using namespace std;

class Order
{
public:
    Order();
    ~Order();
    void Creat_Order();
    void Update_Order();
    void Edit_Order();
    void Write_file_Order();
    void read_file_Order();
    void Delete_Order();
    int iD_customer_ord;
    void print();
    friend std::ostream& operator<<(std::ostream& out, Order& o);
    friend std::istream& operator>>(std::istream& in, Order& o );
    int ID;
    int Number_OF_Order;
    double total=0;
    string date;
    int Quantity_Order;
    int ID_Product_Search;
    int iD_company_ord;
    int ID_Product_Search_For_Company;
protected:
    Customer*customerord;
    int ID_Delete;
private:


};

#endif // ORDER_H
