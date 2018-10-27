//
//  PEC005.cpp
//  UCA
//
//  Created by Pankaj Devrath on 12/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include"iostream"
#define ll long long int
#include "algorithm"
using namespace std;

int main(){
    
    int test;
    cin >> test;
    while( test-- ){
        ll x;
        cin >> x;
        ll arr[x];
        for( int i = 0; i < x; i++){
            cin >> arr[i];
        }
        ll max = 1;
        ll dp[x];
        dp[0] = 1;
        for(ll i = 1; i < x; i++){
            dp[i] = 1;
            for (ll j = 0; j < i; j++){
                if( (arr[i] >= arr[j]) &&( dp[i] < (dp[j] + 1) )){
                    dp[i] = dp[j] + 1;
                }
            }
        }
        cout << *max_element(dp, dp + x) << endl;
    }
}
