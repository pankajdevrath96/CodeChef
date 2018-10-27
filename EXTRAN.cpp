//
//  EXTRAN.cpp
//  UCA
//
//  Created by Pankaj Devrath on 07/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//
#include "iostream"
#include "algorithm"
using namespace std;

int main(){
    
    int test;
    cin >> test;
    while( test-- ){
        
        int size;
        cin >> size;
        int arr[size];
        
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }
        sort( arr, arr + size);
        
        if(arr[1] - arr [0] != 1){
            cout << arr[0] <<endl;
        }
        
        else{
            
            for( int i = 1; i < size; i++){
                if( arr[i] - arr[i-1] != 1){
                    cout << arr[i] << endl;
                    break;
                }
            }
            
        }
        
//
//        if(arr[1] - arr [0] != 1){
//            cout << arr[0] <<endl;
//        }
//        else if(arr[size - 1 ] - arr[size - 2] != 1){
//            cout<< arr[ size - 1] << endl;
//        }
//        else{
//
//            for( int i = 1; i < size - 1; i++){
//                if( arr[i] == arr[i-1]){
//                    cout << arr[i] << endl;
//                    break;
//                }
//            }
//
//        }
        
        
        
        
    }
    
}
