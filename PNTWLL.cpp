////
////  PNTWLL.cpp
////  UCA
////
////  Created by Pankaj Devrath on 26/10/18.
////  Copyright © 2018 Pankaj Devrath. All rights reserved.
////
//
//Professor Sahil is a master artist, he always finds creative ways to teach lessons to his students. Today in Painting class he took all the students of the class to a wall. Professor Sahil asked every student to paint the wall upto a certain integral height one by one (second boy starts once the first boy finishes painting) from the bottom with any color of their wish, except a student Mudit who was made to stand behind the wall and note down all the data i.e the height upto which each student painted and the color Ci
//every student used. At the end of the painting session Professor asked Mudit to tell how many distinct colors are there on the wall. Mudit being a weak student asked you for help.
//
//Formally, given a wall of infinite height, initially unpainted. There occur N
//operations, and in ith operation, the wall is painted upto height Hi
//with color Ci
//. Suppose in jth operation (j>i) wall is painted upto height Hj
//with color Cj
//such that Hj
//>= Hi
//, the Cith
//color on the wall is hidden. At the end of N
//operations, you have to find the number of distinct colors(>=1) visible on the wall.
//
//Help him find out the number of distinct colors on the wall.
//
//Input:
//The first line consists of single integer T
//denoting the number of test cases.
//The second line contains 2 space separated integers N
//and M
//, denoting the number of students and number of colors available (1 to M
//                                                                  ).
//The third line contains N
//-space separated integers (Hi
//                           ) denoting the height upto which each student painted the wall.
//The fourth line contains N
//space separated integers denoting the color ( Ci
//                                             ) the ith student used.
//Output:
//Print the number for distinct colors on the wall for each test case.
//
//Constraints
//1≤T≤100
//1≤N,M≤105
//Sum of N over all test cases <= 5∗105
//Sum of M over all test cases <=5∗105
//1≤Hi≤109
//1≤Ci≤M
//Sample Input:
//3
//5 4
//1 2 3 4 5
//3 3 3 3 3
//5 4
//3 5 1 2 3
//1 2 3 4 3
//5 5
//5 4 3 2 3
//1 2 3 4 5
//Sample Output:
//1
//2
//3
//EXPLANATION:
//In the first test case, painted upto height 1, 2, 3, 4, 5 in the five operations, all with the same color. Hence, the number of distinct colors is 1.

#include"iostream"
#include"set"
#include "algorithm"

using namespace std;
#define ll long long int
int main(){
    ll test;
    cin >> test;
    
    while( test-- ){
        
        ll n, m, j;
        cin >> n >> m;
        ll a[n];
        ll b[n];
        for(j = 0; j < n; j++)
            cin >> a[j];
        for(j = 0; j < n; j++)
            cin >> b[j];
        ll max = INT_MIN;
        
        set <ll> s;
        for(j = n - 1; j >= 0; j--){
            if(max < a[j]  ){
                max = a[j];
                s.insert(b[j]);
            }
        }
        cout << s.size() << "\n";
    }
}
