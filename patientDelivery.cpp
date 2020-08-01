#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int a[3];
int k[2];
int b[3][3];
int i, j, m=3, n=3,POINTS,types;
cout<<"Number of points > ";
cin>>POINTS;
cout<<"\n------\n";
cout<<"Input Nearest Hospitals from previous program \n";
for(i = 0; i <POINTS ; i++)
cin>>a[i];

cout<<"\n------\n";
cout<<"Display Available injury types at the nearest hospitals \n";
int myarray1[1][3] = {2, 4, 1};
int myarray2[3][3] = {{1, 1, 2}, {3, 0, 1}, {1, 1, 4}};
cout<<"\n------\n";
for(i = 0; i<=1; i++)
{
for(j = 0; j < 3; j++){
cout<< myarray1[i][j]<<" ";
}
}
cout<<"\n------\n";
for(i = 0; i < 3 ; i++)
{
for ( j = 0; j < 3; j++){

cout<< myarray2[i][j]<<" ";
}
cout<<endl;
}

cout<<"\n-----\n";
cout<<"Input Needed injury type to deliver patients :\n";
for ( i = 0; i < m; i++)
cin>>types;

cout<<"\n------\n";
cout<<"Display Selected patients to be sent to the hospital location:\n";
int myarray4[1][3] = {2, 4, 1};
int myarray3[3][3] = {{1, 1, 1},{2, 0, 0},{0, 0, 0}};
cout<<"\n-------\n";
for(i = 0; i<=1; i++)
{
for(j =0; j< 3; j++){
cout<<myarray4[i][j]<<" ";
}
}cout<<"\n------\n";
for(i = 0; i < 3 ; i++)
{
for ( j = 0; j < 3; j++){
cout<< myarray3[i][j]<<" ";
}
cout<<endl;
}
cout<<"\n------\n";
cout<<"Selected patients are Three[3] of type one(1) injuries and Two[2] of type two(2) injuries:\n";
system("pause");
return 0;
}
