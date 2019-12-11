#include "search.h"


int main(){
    
    char vec[8] = {'a','b','c','d','e','f','g','h'};
    std::cout << recursive_ternary_search( vec, 0, 7, 'b');

    return 0;
}