//
//  TRICOIN.cpp
//  UCA
//
//  Created by Pankaj Devrath on 08/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include <iostream>
#include"algorithm"
#define upper 1000000000000000000
#define ull unsigned long long int
using namespace std;
int main(){
    int test;
    cin >> test;
    while( test-- ){
        int n;
        cin >> n;
        ull low = 0;
        ull high = upper;
        while( low < high){
            ull mid = (low + high) / 2;
            if( (mid *( mid + 1)) /2 <= n){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
        cout << low - 1 << endl;
    }
    return 0;
}
