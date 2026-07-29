#include<iostream>
using namespace std;
int main()
{
    int i,flight_no,flag=0;
    int a[5]={176,223,344,556,322};

    //printing the flight numbers
    cout<<"The flight numbers are: ";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<'\t';
    }

    //enter the flight no
    cout<<"\nEnter the flight number to be searched: ";
    cin>>flight_no;

    //searching the flight number
    for(i=0;i<5;i++)
    {
       if(a[i]==flight_no)
    {
        flag=1;
    }
    }
    //checking the flag 
    if(flag==1)
    {
        cout<<"flight no. "<<flight_no<<" is found";
    }
    else
    {
        cout<<"flight no. "<<flight_no<<" is not found";
    }
    return 0;
}
