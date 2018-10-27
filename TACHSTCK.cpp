//
//  TACHSTCK.cpp
//  UCA
//
//  Created by Pankaj Devrath on 06/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//
#include<iostream>
#include "algorithm"
using namespace std;
int main(){
    
   
        int n, x;
        cin >> n >> x;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        
        int count = 0;
        int  i = 0;
        while( i < n-1){
            
            if( arr[i+1] - arr[i] <=x){
                i += 2;
                count++;
            }
            else {
                i++;
            }
            
        }
        
        cout << count <<endl;
    
    
}
