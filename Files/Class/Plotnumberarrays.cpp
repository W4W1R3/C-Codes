#include<iostream>
using namespace std;
struct Plotnumberarrays
{
char PlotNo[10];
float size;
char location[20];
}plot[5];
int main()
{
int i;
for ( i = 0; i < 1; i++)
{
cout<<"Enter the plot number,size and location for the plot: "<<i<<endl;
cin>>plot[i].PlotNo;
cin>>plot[i].size;
cin>>plot[i].location;
}
cout<<"PlotNO\tSize\tLocation"<<endl;
for ( i = 0; i < 1; i++)
{
cout<<plot[i].PlotNo<< "\t "<<plot[i].size<< "\t "<<plot[i].location<<endl;
}
return 0;
}