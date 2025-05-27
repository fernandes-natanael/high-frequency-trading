#include <iostream>
#include <deque>
#include <numeric>

class RealTimeSMA {
    public:
        RealTimeSMA(int period): period(period) {}

        void addPrice(double price) {
            if (prices.size() == period) {
                prices.pop_front(); // remove old price to use only price in the period
            }
            prices.push_back(price);
        }

        double calculateSMA() const {
            return std::accumulate(prices.begin(), prices.end(), 0.0)/prices.size();
        }


    private:
        std::deque<double> prices;
        int period;
};

int main() {
    RealTimeSMA sma(5);

    sma.addPrice(50);
    sma.addPrice(51);
    sma.addPrice(52);
    sma.addPrice(53);
    sma.addPrice(54);
    sma.addPrice(54);
    sma.addPrice(54);
    sma.addPrice(54);
    sma.addPrice(54);
    std::cout << sma.calculateSMA() << std::endl;
    return 0;
}