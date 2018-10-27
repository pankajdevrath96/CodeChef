//
//  Temple Land.cpp
//  UCA
//
//  Created by Pankaj Devrath on 04/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include<iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int flag = 1;
        int len;
        cin>>len;
        int arr[len];
        for(int i = 0;i < len; i++){
            cin>>arr[i];
        }
        if((arr[0] != 1 || arr[len-1]!=1) || (len % 2 == 0) ){
            flag = 0;
        }
        else {
            for(int i = 1; i <=len/2; i++){
                if((arr[i] != arr[len-i-1]) || (arr[i] - arr[i-1] != 1)){
                    flag = 0;
                    break;
                }
            }
                
        }
        if(flag)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        }
}
