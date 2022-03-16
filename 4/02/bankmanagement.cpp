#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class bank
{
    private:
    int account_no ;
    string account_name ;
    int balance_amount ;
    public:
    void open_account()
    {
        cout << "Account Number : " ;
        cin >> account_no ;
        cout << "Account Name : " ;
        cin >> account_name ;
        cout << "Balance amount : " ;
        cin >> balance_amount ;
    }
    void show_account_info()
    {
        cout << "Account Number : " << account_no << endl;
        cout << "Account Holder Name : " << account_name << endl;
        cout << "Balance Amount : " << balance_amount << endl;
    }
    void deposit()
    {
        int amount_to_be_deposit ;
        cout << "Amount to be deposited : " ;
        cin >> amount_to_be_deposit ;
        balance_amount = balance_amount + amount_to_be_deposit ;
    }
    void withdraw()
    {
        int amount_to_be_withdrawn ;
        cout << "Amount to be withdrawn : " ;
        cin >> amount_to_be_withdrawn ;
        if(balance_amount > amount_to_be_withdrawn)
        {
        balance_amount = balance_amount - amount_to_be_withdrawn ;
        }
        else 
        {
            cout << "Insufficient Balance to Withdraw given amount " << endl;
        }
    }
    int search(int key)
    {
       if(key == account_no)
       {
           show_account_info();
           return (1) ;
       }
       return (0) ;
    }

};

int main()
{
    int n ;
    cout << "NO. of accounts in bank : " ;
    cin >> n ;
    bank utk[n] ;
    int got_key = 0 ;
    int choice , i , input ;
    for(i = 0 ; i < n ; i++)
    {
        utk[i].open_account();
    }
    for(int j = 0 ; choice != 5 ; j++)
    {
        cout << "1 : Details of all accounts in bank " << endl;
        cout << "2 : Search Account " << endl;
        cout << "3 : To Deposit " << endl;
        cout << "4 : To Withdraw " << endl;
        cout << "5: Exit " << endl;

        cout << "Input your choice : " ;
        cin >> choice ;

        switch(choice)
        {
            case 1 : 
            for( i = 0 ; i < n ; i++)
            {
                utk[i].show_account_info();
            }
            break ;
            case 2 :
            cout << "Enter Account Number : ";
            cin >> input;
            for(i = 0 ; i < n ; i++)
            {
            got_key = utk[i].search(input);
            if(got_key)
            {
                break;
            }
            }
            if(!got_key)
            cout << "No record found in database" << endl;
            break ;
            case 3 :
            cout << "Account Number in which we have to deposit : ";
            cin >> input ;
            for(i = 0 ; i < n ; i++)
            {
              got_key == utk[i].search(input);
              if(got_key)
              {
                utk[i].deposit();
                break ;
              }
            }
            if(!got_key)
            cout << "No record found in database" << endl;
            break ;
            case 4 : 
            cout << "Account Number in which we have to withdraw : ";
            cin >> input ;
            for(i = 0 ; i < n ; i++ )
            {
                got_key = utk[i].search(input);
                if(got_key)
                {
                    utk[i].withdraw();
                    break ;
                }
            }
                if(!got_key)
                cout << "No record found in database" << endl;
               break ;
            case 5 : 
             cout << "Your work is done "   << endl;
             break ;
             default:
             cout << "Wrong Option" << endl;
            
        } 
    }
    return 0 ;
}