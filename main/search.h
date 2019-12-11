#ifndef SEARCH_H
#define SEARCH_H

#include<iostream>

template <class temp>
int linear_search( temp vec[], int l, int r, temp target ){
    
    while( l <= r ){
        if( vec[l] == target ){
            return l;
        }
        l++;
    }

    return -1;
}

template <class temp>
int binary_search( temp vec[], int l, int r, temp target ){
    int m;

    while( l <= r ){

        m = l + (r-1)/2;
        if( vec[m] < target ){
            l = m+1;
        }
        else if( vec[m] > target ){
            r = m-1;
        }
        else{
            return m;
        }

    }
    
    return -1;
}

template <class temp>
int recursive_binary_search( temp vec[], int l, int r, temp target ){
    int m;
    
    if(l <= r){
        m = (l+r)/2;

        if( vec[m] < target ){
            l = m+1;
        }
        else if( vec[m] > target ){
            r = m-1;
        }
        else{
            return m;
        }
        return recursive_binary_search( vec, l, r, target );
    }

    return -1;
}

template <class temp>
int ternary_search( temp vec[], int l, int r, temp target ){
    
    int m1, m2;

    while( l <= r ){
        m1 = l + (r-l)/3;
        m2 = r - (r-l)/3;

        if( vec[m1] == target ){
            return m1;
        }
        else if( vec[m2] == target ){
            return m2;
        }

        if( vec[m1] > target ){
            r = m1-1;
        }
        else if( vec[m2] < target ){
            l = m2+1;
        }
        else {
            l = m1+1;
            r = m2-1;
        }

    }

    return -1;
}

template <class temp>
int recursive_ternary_search( temp vec[], int l, int r, temp target ){
    int m1, m2;
    
    if( l <= r ){
        m1 = l + (r-l)/3;
        m2 = r - (r-l)/3;

        if( vec[m1] == target ){
            return m1;
        }
        else if( vec[m2] == target ){
            return m2;
        }
        if( vec[m1] > target ){
            r = m1-1;
        }
        else if( vec[m2] < target ){
            l = m2+1;
        }
        else {
            l = m1+1;
            r = m2-1;
        }

        return recursive_ternary_search( vec, l, r, target );
    }

    return -1;
}

template <class temp>
int fibonacci_search(  temp vec[], int l, int r, temp target  ){
    int fib_n, fib_nm1, fib_nm2;
    int mf;
    
    fib_nm2 = 1;
    fib_nm1 = 1;
    fib_n = 2;

    if( vec[l] == target ) return l;

    while( fib_n < r+1 ){
        fib_nm2 = fib_nm1;
        fib_nm1 = fib_n;
        fib_n = fib_nm1 + fib_nm2;
    }

    while( fib_nm2 >= 1 ){
        mf = std::min( l + fib_nm2, r );

        if( vec[mf] == target ){
            return mf;
        }
        else if( vec[mf] < target ){
            l = mf;

            fib_n = fib_nm1;
            fib_nm1 = fib_nm2;
            fib_nm2 = fib_n - fib_nm1;

        }
        else{

            fib_n = fib_nm2;
            fib_nm1 = fib_nm1 - fib_nm2;
            fib_nm2 = fib_n - fib_nm1;

        }
    }

    return -1;
}

#endif