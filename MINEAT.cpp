//
//  MINEAT.cpp
//  UCA
//
//  Created by Pankaj Devrath on 08/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include"iostream"
#include "algorithm"
#include "cmath"
#define ull unsigned long long int
#define lim 1000000000000000000
using namespace std;


ull findVal( int *arr ,ull dem, ull size){
    ull sum = 0;
    for(int i = 0; i < size; i++){
        sum += int(ceil( arr[i] /(double) dem ));
        
      //  cout <<sum <<endl;
    }
    return sum;
    
}


int main(){
    
    ull test;
    cin >> test;
    
    while( test --){
        
        ull size , hours;
        ull sum = 0;
        cin >> size >> hours;
        
        int bananas[size] ;
        
        for( ull i = 0; i < size; i++){
            cin >> bananas[i];
            sum += bananas[i];
        }
        
        ull low  = 0;
        
        ull high = sum;
        while( low < high){
            ull mid = (low + high ) / 2;
            
            sum = findVal( bananas, mid, size);
           
            if( sum <= hours){
                high = mid;
            }
            else{
                low = mid + 1;
              
            }
            
        }
        cout << low <<endl;
        
        
    }
    
    
}


