#include <iostream>
#include <vector>
#include <atomic>
#include <thread>

using namespace std;

class MarketDataUpdate {
    public:
        MarketDataUpdate(double price, unsigned long volume): _price(price), _volume(volume){}

        double get_price() const { return _price; }
        unsigned long get_volume() const { return _volume; }

    private:
        double _price;
        unsigned long _volume;

};

class DataHandler {
    public:
        void on_data(const MarketDataUpdate& update) {
            process_update(update);
        }

    private:
        void process_update(const MarketDataUpdate& update) {
            cout << "Price: " << update.get_price() << ", Volume: " << update.get_volume() << endl;
        }
};


int main() {
    DataHandler handler;

    MarketDataUpdate update(100.5, 1500);
    handler.on_data(update);
    return 0;
}