//
//  SNAKEEAT.cpp
//  UCA
//
//  Created by Pankaj Devrath on 08/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include <iostream>
#include "algorithm"
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main(){
    int test;
    cin >> test;
    while( test-- ){
        ull size , queries;
        cin >> size >> queries;
        ull snakes[size];
        ull prefix[size];
        for(ull i = 0; i < size; i++){
            cin >> snakes[i];
        }
        sort( snakes, snakes + size);
        prefix[ 0 ] = snakes[ 0 ];
        for( ull i = 0; i < size; i++){
            prefix[i] = prefix[i - 1] + snakes[i];
        }
       // cout<< lower_bound(snakes, snakes + size, 6) - snakes << " " << upper_bound(snakes, snakes + size, 6) -snakes;
        while ( queries-- ) {
            ull x;
            cin >> x;
            
            ull max_index = lower_bound(snakes, snakes + size, x) - snakes;
            
            ull low = 0;
            ull high = max_index;
            
            while ( low < high){
                ull mid = ( low + high) / 2;
                ull sum  = ( x * (max_index - mid) )- (prefix[max_index - 1] - prefix[mid - 1] );
                
                if ( sum <= mid){
                    
                    high = mid;
                }
                else {
                    low = mid + 1;
                }
            }
            cout << size - high <<endl;
        }
    }
    
}
