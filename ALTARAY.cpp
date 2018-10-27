//
//  ALTARAY.cpp
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
        int dp[n];
        dp[n - 1] = 1;
        for(int i = n - 2; i >= 0; i--){
            
            if( (arr[i] > 0 && arr[i + 1] > 0) || (arr[i] < 0 && arr[i + 1] < 0) ){
                dp [i] = 1;
            }
            else{
                dp[i] = dp[i + 1] + 1;
            }
            
            
        }
        for(int i = 0; i < n; i++){
            cout <<dp[i] << " ";
        }
        cout << endl;
        
    }
    
    
    
    return 0;
}
