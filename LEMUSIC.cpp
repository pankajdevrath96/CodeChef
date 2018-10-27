//
//  BOOKCHEF.cpp
//  UCA
//
//  Created by Pankaj Devrath on 07/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//


#include"iostream"
#include"algorithm"
#include "vector"
#define pll pair<unsigned long long , unsigned long long >
#define ull unsigned long long
using namespace  std;

int main(){
    int test;
    cin >> test;
    while(test--){
        
        int size;
        cin >> size;
        vector< pll > vect;

        for(int  i = 0; i < size; i++){
            ull a, b;
            cin >> a >> b;
            vect.push_back(pll(a, b));

        }
        
        sort(vect.begin(), vect.end());
        vector<ull> len;
        len.push_back(vect[0].second);
        vect[0].second = 0;
        for(int i = 1; i < vect.size()  ; i++){
            if( vect[i].first != vect[i - 1].first){
                len.push_back(vect[i].second);
                vect[i].second = 0;
                
            }
            
        }
        sort (len.begin(),len.end());
        ull sum = 0;
        int  j = 1;
        for(int i = 0; i < len.size();i++){
            sum += (len[i] * j);
            j++;
        }
        j--;
        for(int i = 0; i < vect.size()  ; i++){
                sum += vect[i].second * (j);
        }
        cout << sum <<endl;
        
    }
    
    
}
