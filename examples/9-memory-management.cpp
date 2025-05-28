#include <iostream> 
#include <vector> 

int main() { 
    std::vector<int> data; 
    data.reserve(1000000); 
    for(int i = 0; i < 1000000; ++i) { 
        data.push_back(i); 
    } 

    /*
    Erases all the elements. Note that this function only erases the
    elements, and that if the elements themselves are pointers, the
    pointed-to memory is not touched in any way. Managing the pointer is
    the user's responsibility.
    */
    data.clear(); 
    
    /*
    Swaps data with another %vector.
    Parameters:
    __x – A %vector of the same element and allocator types.
    This exchanges the elements between two vectors in constant time. (Three pointers, so it should be quite fast.) Note that the global std::swap() function is specialized such that std::swap(v1,v2) will feed to this function.
    Whether the allocators are swapped depends on the allocator traits.
    */
    std::vector<int>().swap(data); // Minimizes the vector's capacity 
    std::cout << "Optimized memory management in action." << std::endl; 
    return 0; 
} 
