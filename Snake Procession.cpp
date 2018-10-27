//
//  Snake Procession.cpp
//  UCA
//
//  Created by Pankaj Devrath on 04/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int x, flag = 1;
        string str;
        cin>>x>>str;
        int m = 0;
        for(int i = 0;i < str.length(); ++i){
            if(str[i] == '.'){
                continue;
            }
            if(str[i] == 'T')
                m--;
            else if(str[i] == 'H')
                m++;
           
            //cout<<m<< " " ;
            if(m!= 0 && m!= 1){
                flag = 0;
                break;
            }
        }
        if(flag ==1 && m ==0){
            cout<<"Valid"<<endl;
        }
        else
            cout<<"Invalid"<<endl;
        
    }
    
}
