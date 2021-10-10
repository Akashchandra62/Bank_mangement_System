#include<bits/stdc++.h>
using namespace std;

//BANK CLASS....
class Bank_Management
{
    private:
        // string name;
        // string address;
        // string acc_type;
        char name[100];
        char address[100];
        char acc_type;
        int balance;


    public:
    
        void open_account();
        void deposite_money();
        void withdraw_money();
        void display_account();
};

//METHOD TO OPEN THE ACCOUNT....
void Bank_Management::open_account()
{
    
    cout << "Enter Your Full Name : ";
    cin.ignore();
    cin.getline(name, 100);
//    cin.ignore();
        
    cout << "Enter Your Address : ";   
    
    cin.getline(address, 100);
 
    cout << "Enter Type Of Account You Want To Open S(Saving) or C(Current): ";   
    cin >> acc_type;
    
    cout << "Enter Your Amount For Deposite : ";
    cin >> balance; 
    
    cout << "Your Account Has Created Successfully... !!" << endl;
    cout << endl;
}

//METHOD TO DISPLAY THE ACCOUNT....
void Bank_Management::display_account()
{
    cout << endl;
    cout << "Full Name     :  " << name << endl;
    cout << "Address       :  " << address << endl;
    cout << "Account Type  :  " << acc_type << endl;
    cout << "Total Balance :  " << balance << endl;
    cout << endl;
}

//METHOD TO DEPOSITE MONEY IN THE ACCOUNT....
void Bank_Management::deposite_money()
{
    int dep_money;
    cout << "Enter The Amount Of Money You Want To Deposite : ";
    cin >> dep_money;

    balance += dep_money;

    cout << "Total Balance : " << balance << endl;
    cout << endl;
}

//METHOD TO WITHDRAW MONEY FROM THE ACCOUNT....
void Bank_Management::withdraw_money()
{
    float draw_money;
    cout << "Enter The Amount Of Money You Want To WithDraw : ";
    cin >> draw_money;
    if(draw_money <= balance)
    {
        cout << endl;
        cout << "WithDraw Successfully..!! ";
        balance -= draw_money;
        cout << "Balnce Left : " << balance << endl;
    }
    else
    {
        cout << endl;
        cout << "Not Enough Balance" << endl;
    }   
    cout << endl;
}


int main()
{
    int option;
    Bank_Management obj;
    //Start Screen Appearance 
    do
    {
        cout << endl;
        cout << "1. Open Account" << endl;
        cout << "2. Deposite Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Display Account" << endl;
        cout << "5. Exit" << endl;
        cout << endl;

        cout << "Select The Option Number : ";
        cin >> option;
        
        if(option == 1)
        {
            obj.open_account();
        }
        else if(option == 2)
        {
            obj.deposite_money();
        }
        else if(option == 3)
        {
            obj.withdraw_money();
        }
        else if(option == 4)
        {
            obj.display_account();
        }
        else if(option>5 or option<1)
        {
            cout << "Enter The Correct Option!!" << endl;
        }
         
    }while(option != 5);
        
    cout << "Thanks For Banking with US ..!!" << endl;;
    return 0;
}