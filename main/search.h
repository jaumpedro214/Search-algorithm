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



#endif