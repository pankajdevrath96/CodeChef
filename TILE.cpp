//
//  TILE.cpp
//  UCA
//
//  Created by Pankaj Devrath on 10/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include "iostream"
#define ull unsigned long long int
#define mod 1000000007
using namespace std;

void multiply_matrix( ull f[2][2], ull m[2][2]){
    
    ull x1 = ( (f[0][0] * m[0][0]) + f[0][1] * m[0] [1]) % mod;
    ull x2 = ( (f[0][0] * m[0][1]) + f[0][1] * m[1] [1]) % mod;
    ull x3 = ( (f[1][0] * m[0][0]) + f[1][1] * m[0] [1]) % mod;
    ull x4 = ( (f[1][0] * m[0][1]) + f[1][1] * m[1] [1]) % mod;
    
    f[0][0] = x1;
    f[0][1] = x2;
    f[1][0] = x3;
    f[1][1] = x4;
    
    
}


void power( ull f[2][2] , ull n){
    
    if( n > 1){
        
        ull m[2][2] = {{1, 1}, {1 , 0}};
        power(f, n/2);
        multiply_matrix( f, f);
        if(n % 2 != 0){
            multiply_matrix( f , m);
        }
    }
}

ull find_tiles(ull n ){
    
    ull f[2][2] = {{1, 1}, {1, 0}};
    if(n > 0){
        
        power(f, n );
        return f[0][0];
    }
    
    return 0;
}



int main(){
    int test;
    cin >> test;
    while ( test-- ) {
        ull n;
        cin >> n;
     //   for(int i = 0; i <= n; i++)
        cout << find_tiles( n )  << endl;
        
    }
    
}
