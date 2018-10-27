//
//  BOOKCHEF.cpp
//  UCA
//
//  Created by Pankaj Devrath on 07/10/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include"iostream"
#include "vector"
#include "algorithm"
#include "string"
using namespace std;

int main(){
    
    int special_friends, posts;
    cin >> special_friends >> posts;
    
    int s_friends[special_friends];
    int freq[100005] = {0};
    for( int i = 0; i < special_friends; i++){
        cin >> s_friends[i];
        freq[ s_friends[ i ] ]++;
    }
  //  vector < int, pair< int, string > > vect;
    pair<int, pair<int, string>> input[posts];
    for( int i = 0; i < posts; i++){
        
        cin >> input[i].first >> input[i].second.first >> input[i].second.second;
        
        if(freq[ input[i].first ] == 0){
            input[i].first = 0;
        }
        else{
            input[i].first = 1;
        }
        
        
    }
    sort(input , input + posts );
    for( int  i = posts - 1; i >= 0; i--){
        cout << input[i].second.second << endl;
    }
    
    return 0;
}


