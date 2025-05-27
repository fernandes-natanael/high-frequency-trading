#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Order {
    public:
        Order(string symbol, double quantity, string type):
        _symbol(symbol), _quantity(quantity), _type(type) {} 

        string get_symbol() const { return _symbol; }
        double get_quantity() const { return _quantity; }
        string get_type() const { return _type; }

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

        void process_orders() {
            for( const auto& order :orders) {
                cout << "Process order: " << order.get_symbol() << order.get_type() << order.get_quantity() << endl;
                // send to EMS (Execution Management System) for execution
            }
        }

    private:
        vector<Order> orders;
};


int main() {
    OrderManagementSystem oms;
    oms.add_order(Order("AAPL", 100, "Buy"));
    oms.add_order(Order("AAPL", 100, "Sell"));
    oms.add_order(Order("AAPL", 100, "ShortShell"));
    oms.process_orders();
    return 0;
}
