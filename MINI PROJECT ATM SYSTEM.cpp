#include<iostream>
using namespace std;
int main()
{
    int balance=50000,with_amount,depo_amount,choice;
    
    do{
        cout<<"\n=============SBI ATM=============";
        cout<<"\n1. Check Balance";
        cout<<"\n2. Withdrawl";
        cout<<"\n3. Deposit";
        cout<<"\n4. Exit";

        cout<<"\nEnter your choice(1-4) :";
        cin>>choice;

        switch (choice)
        {
    
            case 1:
                cout<<"Your bank balance is ₹"<<balance;
                    break;
    
            case 2:
                cout<<"Enter amount to Withdraw ₹";
                cin>>with_amount;
                if (with_amount>balance)
                {
                    cout<<"Insufficient Balance";
                } else {
                balance = with_amount - balance ;
                cout<<"Your Total Balance is ₹"<<balance;
                }    
                    break;

            case 3:
                cout<<"Enter amount to deposit ₹";
                cin>>depo_amount;
                balance = balance + depo_amount;
                cout<<"Your total balance is ₹"<<balance;
                    break;
            
            case 4:
                cout<<"Thanks For Visiting";            
                    break;
       
            default:
                cout<<"Invalid Choice";           
       
        }//switch case
    
    }//do

    while(choice!=4);

return 0;
}//main
