// Given Two strings s and t which consists of only lower case letter
// String t is generated by random shuffling string s and then add one more letter at random position
// Find the letter that was added to string t
// Input format => first line will contain s, Second line will contain t
// Output=> print the letter which was added in the string
// s="abcdef" ,t="defacbk"  , output=> k;

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main () {
string s,t;
cin>>s;
transform(s.begin(),s.end(),s.begin(),::tolower);
cin>>t;
transform(t.begin(),t.end(),t.begin(),::tolower);
int i;
for(i=0;i<t.length();i++){
 if(s.find(t.at(i))==(-1))
 {
	 cout<<t.at(i);
 }
}}
