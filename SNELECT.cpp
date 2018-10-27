//
//  SNELECT.cpp
//  UCA
//
//  Created by Pankaj Devrath on 04/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//
#include<iostream>
#include "string"
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        
        string str;
        cin>>str;
        
        int i = 0, count_m = 0, count_s = 0;
        
        while( i < str.length()){
            
            if(str[i] == 'm'){
                count_m++;
                if(str[i-1] == 's'){
                    count_s--;
                }
                else if(str[i+1] == 's'){
                    str[i+1] = '*';
                    i++;
                }
                
            }
            else{
                count_s++;
            }
            i++;
           
        }
        
        if(count_s == count_m){
            cout<<"tie"<<endl;
        }
        else if(count_s > count_m){
            cout<<"snakes"<<endl;
        }
        else{
            cout<<"mongooses"<<endl;
        }
        
        
        
    }
    
    
}
