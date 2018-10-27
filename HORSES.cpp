//
//  HORSES.cpp
//  UCA
//
//  Created by Pankaj Devrath on 05/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//


#include "iostream"
#include "algorithm"
using namespace std;

int main(){
    
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int arr[n];
        for(int  i = 0; i < n; i++){
            
            cin >> arr[i];
            
        }
        sort(arr,arr+n);
        
        long long int min = 1000000000;
        
        for(int i = 1; i < n; i++){
            if(arr[i] - arr[i-1] < min){
                min = arr[i] - arr[i-1];
            }
        }
        
        cout<<min<<endl;
        
    }
    
}
