//
//  Chef and the Wildcard Matching.cpp
//  UCA
//
//  Created by Pankaj Devrath on 04/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main(){
//    int test;
//    cin>>test;
//    while(test--){
//
//        string str1,str2;
//        cin>>str1>>str2;
//        int i = 0,count = 0;
//        while(str1[i]!='\0'){
//            if(str1[i++] == '?')
//                count++;
//
//        }
//        i = 0;
//        while(str2[i]!='\0'){
//            if(str2[i++] == '?')
//                count--;
//        }
//        if(count == 0)
//            cout<<"Yes"<<endl;
//        else
//            cout<<"No"<<endl;
//    }
//
//
//}



#include<iostream>
#include<string>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        
        string str1,str2;
        cin>>str1>>str2;
        int i = 0,flag = 1;
        while(i < str1.length()){
            if((str1[i] != str2[i]) && (str1[i] != '?' && str2[i] != '?'))
                {
                  flag = 0;
                }
            i++;
        }
        
        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    
    
}

