#include <iostream>
#include <vector>

using namespace std;

class Order {
    public:
        Order(string symbol, double quantity, string type):
        _symbol(symbol), _quantity(quantity), _type(type) {} 

        void execute() const {
            cout << "Executing order for:" << _symbol << ", " << _quantity << ", " << _type << endl;
        }

    private:
        string _symbol;
        double _quantity;
        string _type;
};

class OrderManagementSystem {
    public:
        void add_order(const Order& order) {
            orders.push_back(order);
        }

        void sumbit_order(const Order& order) {
            if (order_validation(order)) {
                order.execute();
            }
        }

    private:
        vector<Order> orders;
        bool order_validation(const Order& order) {
            //logic
            return true;
        }
};


int main() {
    OrderManagementSystem oms;
    Order order("AAPL", 100, "Buy");
    oms.sumbit_order(order);
    return 0;
}
