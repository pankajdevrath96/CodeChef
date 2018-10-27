//
//  PERMSUFF.cpp
//  UCA
//
//  Created by Pankaj Devrath on 07/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//


#include "iostream"
#include "algorithm"
#define ll long long int
using namespace std;
int main(){
    int test;
    cin >> test;
    while( test-- ){
        ll size , t;
        cin >> size >> t;
        ll arr[size];
        for(ll i = 0; i < size; i++){
            cin >> arr[i];
        }
        ll freq[100005] = {0};
        
        for(ll i = 0; i < t; i++){
            
            int low, upper;
            cin >> low >> upper;
            freq[low - 1 ]++;
            freq[upper - 1 ]--;
            
        }
        
        
        ll count = 0;
        ll j = 0, flag = 1;
//        for(int i = 1; i <= size; i++){
//            count += freq[i];
//         //   cout << freq[i] << endl;
//            if(count == 0){
//
//                if( i == j){
//                    if(arr[ i ] != i ){
//
//                        flag = 0;
//                        break;
//                    }
//                    else{
//                        j = i + 1;
//                    }
//                }
//                else {
//                sort( arr + j, arr + i + 1 );
//                for (int k = j ; k <= i; k++){
//                   // cout<< arr[k] <<endl;
//                    if(arr[ k ] != k){
//                        flag = 1;
//                        break;
//                    }
//                }
//                j = i + 1;
//                }
//            }
//        }
//
        
        for ( ll i = 0; i < size; i++){
            
            count += freq[i];
            
            if( count == 0){
                
                if(i == j){
                    if( arr[i] != (i + 1)){
                        flag = 0;
                        break;
                    }
                    
                    
                }
                else{
                    
                    sort( arr + j, arr + i + 1 );
                    for(ll k = j; k <=  i; k++){
                        if( arr[k] != (k + 1)){
                            flag = 0;
                            break;
                        }
                    }
                }
                j = i + 1;
              
            }
            if(flag == 0){
                break;
            }
            
            
        }
        
        
        
        
        
        
        if(flag){
            cout << "Possible" << endl;
            
        }
        else {
            cout << "Impossible" << endl;
        }
        
    }
    return 0;
}
