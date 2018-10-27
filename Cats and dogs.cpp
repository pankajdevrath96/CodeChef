//
//  Cats and dogs.cpp
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
        long int dogs ,cats,legs;
        cin>>cats>>dogs>>legs;
        int flag = 1;
        if( (legs % 4 != 0) || (legs > 4*(dogs + cats)) || (legs < 4 * dogs)  )
            flag = 0;
        else if( 2 * dogs < cats){
            cats = cats - (2 * dogs);
            if(legs < 4 *(dogs + cats ))
               flag = 0;
               
        }
               
               if(flag)
               cout<<"yes\n";
               else
               cout<<"no\n";
        }
}
