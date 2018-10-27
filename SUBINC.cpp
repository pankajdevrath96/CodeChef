//
//  SUBINC.cpp
//  UCA
//
//  Created by Pankaj Devrath on 10/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int test;
    cin >> test;
    while( test-- ){
        int n;
        cin >> n;
        int arr[n];
        for(int  i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        int j = 0, i;
        long long int sum = 0;
        for( i = 0;i < n - 1; i++){
            if(arr[i] > arr[i + 1]){
                long long int diff = i - j + 1;
                sum += ( diff * (diff + 1)) /2;
                j = i + 1;
            }
            
        }
        int diff = i - j + 1;
        sum += ( diff * (diff + 1)) /2;
        
        cout << sum <<endl;
        
    }
    
    
    
    return 0;
}
