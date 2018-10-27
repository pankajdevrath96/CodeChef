//
//  CSUB.cpp
//  UCA
//
//  Created by Pankaj Devrath on 04/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//
#include "iostream"
using namespace std;
int main(){
    int test;
    cin>>test;
    while (test--) {
        long long int len , count  = 0;
        string str;
        cin >> len >> str;
        for(int i = 0; i < len ;i++){
            
            if(str[i] == '1')
                count++;
        }
        count  = (count * (count + 1))/2;
        cout<<count<<endl;
    }
    
    
}
