#include <iostream>
#include <vector>
#include <algorithm>

class MarketDataProcessor {
    public:
        void process_tick_data(const std::vector<int> &tick_data) {
            //processing tick logic 
            auto max_tick = * std::max_element(tick_data.begin(), tick_data.end());
            std::cout << "Maximun tick value: " << max_tick << std::endl;
        }
};

int main () {
    MarketDataProcessor processor;
    std::vector<int> sample_tick_data = {100, 105, 102, 110, 108};
    processor.process_tick_data(sample_tick_data);
    return 0;
}