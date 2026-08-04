#include<iostream>
using namespace std;

int binarysearch(int A[],int,int);

int binarysearch(int A[],int low,int high)

{
    int key,mid;
    cout<<"enter the fisrt key"<<"\t";
    cin>>key;
    while(low<=high)
    {
        mid=low+(high-low)/2;


        if(key==A[mid])
        {
            return mid;

        }
        if(key>A[mid])
        {
            low=mid+1;

        }
        else
        {
            high=mid-1;

        }
    }

    return -1;
}


int main()
{
    int A[]={2,3,7,9,11,12,13,19};
    int  result=0,i=0;

    for(i=0;i<=7;i++)
    {
        cout<<A[i]<<"\t";
    }
    result=binarysearch(A,0,7);
    if(result==-1)
    {
        cout<<"the element is not found";

    }
    else
    {
        cout<<"the element is  found";

    }
    getch();
}








