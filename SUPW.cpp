//
//  SUPW.cpp
//  UCA
//
//  Created by Pankaj Devrath on 09/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include"iostream"
#include"algorithm"
#include<cmath>
using namespace std;



int main(){
    
    int n;
    cin >> n;
    int arr[n];
    for(int  i = 0; i < n; i++){
        cin >> arr[i];
    }
    int dp[n] ;
    dp[0] = 0;
    dp[1] = 0;
    int m = min( arr[0], arr[1]);
    //cout << m <<endl;
     dp[2] = min(arr[2], m);
    
    for(int i = 3; i < n; i++){
        int m = min ((arr[i - 1] + dp[i - 2]),( arr[i -2] + dp[i - 3]));
        dp[i] = min( (arr[i] + dp[i - 1]) , m);
        
        
    }
    
    
    cout << dp[n - 1] <<endl;
    
}
