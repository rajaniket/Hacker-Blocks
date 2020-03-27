/*Given an array of n integers, slope of a line i. e., m and the intercept of the line i.e c,
Count the number of ordered pairs(i, j) of points where i ≠ j,
such that point (Ai, Aj) satisfies the line formed with given slope and intercept.
Note : The equation of the line is y = mx + c, where m is the slope of the line and c is the intercept.
Input : m = 1, c = 1, arr[] = [ 1, 2, 3, 4, 2 ]
Output : 5 ordered points
Explanation : The equation of the line with given slope and intercept is : y = x + 1.
The Number of pairs (i, j), for which (arri, arrj) satisfies the above equation of the line are : (1, 2), (1, 5), (2, 3), (3, 4), (5, 3).
*/
#include<iostream>
using namespace std;
int main(){
int n,m,c,k=0;
cin>>n>>m>>c;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];} // taking elements
for(int i=0;i<n;i++)
for(int j=0;j<n;j++){ // generating combinations
if(i!=j){
    if(a[j]==a[i]*m+c)
     k++;
}}
cout<<endl<<k;
}
