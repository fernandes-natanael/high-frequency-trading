#include <iostream> 
#include <vector> 

using namespace std;

double get_latest_market_price() {
    // Logic
    return 50.0;
}

bool should_buy(double current_price, vector<double> &price_history) {
    double average = 0;
    for(double price: price_history) {
        average += price;
    }
    average /= price_history.size();

    return current_price > (average * 1.05);
}

int main() {
    vector<double> history = { 50, 49, 48, 46, 47};
    double current = get_latest_market_price();

    if(should_buy(current, history)) cout << "Should buy\n";
    else cout << "Should not buy\n";


    return 0;
}
