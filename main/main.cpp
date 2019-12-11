#include "search.h"


int main(){
    
    char vec[8] = {'a','b','c','d','e','f','g','h'};
    std::cout << recursive_binary_search( vec, 0, 7, 'h');

    return 0;
}