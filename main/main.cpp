#include "search.h"


int main(){
    
    int vec[] = {1,2,3,4,5,6,7,8,9,10,12,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
    std::cout << fibonacci_search( vec, 0, (int)sizeof(vec)/sizeof(vec[0])-1, 11 );

    return 0;
}