//
//  IPL.cpp
//  UCA
//
//  Created by Pankaj Devrath on 09/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include"iostream"
#include"algorithm"
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }
    int dp[n];
    dp[0] = arr[0];
    dp[1] = arr[0] + arr[1];
  
    dp[2] = max (arr[0] + arr[1] , max( arr[1] + arr[2], arr[0] + arr[2] ));
    for(int i = 3; i < n; i++){
        dp[i] = max( dp[ i - 1], max( arr[i] + dp[i - 2], arr[i] + arr[i - 1] + dp[ i -3 ]));
        
    }
    cout << dp[ n - 1] <<endl;
}
