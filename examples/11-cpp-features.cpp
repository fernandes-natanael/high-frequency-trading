#include <vector>
#include <thread> 

// Generics
template<typename T>
T max(T a, T b) {
    return a > b ? a : b;
}

/*
The inline keyword suggests the compiler that it should replace the functions call with the actual code 
of the function to avoid the overheads of the function call. Inlining a functions is only a request to 
the compiler, not a command. The compiler may not perform inlining in such circumstances as: 

    If a function contains a loop.
    If a function contains static variables. 
    If a function is recursive. 
    If a function return type is other than void, and the return statement doesn't exist in a function body. 
    If a function contains a switch or goto statement. 
*/
inline double square(double num) {
    return num * num;
}

//Move semantics
std::vector<int> data;
auto moved_data = std::move(data);

//Threads

void executeTrades() { 
// Simulate trade execution 
} 
int main() { 
    std::thread traderThread(executeTrades); 
    traderThread.join(); 
} 
