#include <iostream>
using namespace std;

int main(){
    int username=0, password=1;
    string useranme, pin;
    int account_no;
    bool verified = false;
    string users[2][2] = {
        {"Sol", "2134"},
        {"Solomon", "2134"}
    };

    exit(0);
    float balance = 690.13, deposit_amount, withdraw_amount;
    int option;
    system("Color 3");
    string menu = "\n    ============ Bank of CPP ============\n\t============ Menu ============\n\t  1. Check Balance \n\t  2. Deposit \n\t  3. Withdraw \n\t  4.Exit \n\t=============================\n";
    cout<<menu;
    
    for(int i=0; i<3; i++){
        cout<<"Enter Account No.: ";
        cin>>account_no;
        account_no -= 1000;
        if(account_no > 1 || account_no < 0){cout<<endl<<"  Try Again"<<endl;continue;}
        cout<<"Enter Pin: ";
        cin>>pin;
        if(pin == users[account_no][password]){
            verified = true;
            system("cls");
            break;
        };
        if(i<2){cout<<endl<<"  Try Again"<<endl;}


    }
    if(!verified){
        cout<<"\n  Too Many attempts! \n  Account blocked."<<endl;
        exit(3);
    };
    cout<<menu;

    do{
        cout<<"\n    =====================================\n\n    Option: ";
        cin>>option;
        system("cls");

        switch(option){
            case 1:
                cout<<menu<<"\tYou're Current Balance is "<<balance<<endl;
                break;
            case 2:
                cout<<"\n    Enter Amount to Deposit: ";
                cin>>deposit_amount;
                balance += deposit_amount;
                system("cls");
                cout<<menu<<"\n\tDeposit Successful. \n\tCurrent balance: "<<balance<<endl;
                break;
            case 3:
                cout<<"\n    Enter Amount to Withdraw: ";
                cin>>withdraw_amount;
                if(withdraw_amount < balance){
                    balance -= withdraw_amount;
                    system("cls");
                    cout<<menu<<"\n\tWithdraw Successful. \n\tCurrent balance: "<<balance<<endl;
                }
                else{
                    cout<<menu<<"\n\tYou do not have enough money"<<endl;
                }
                break;
            case 4:
                cout<<"\n    Program Terminated.\n";
                break;
            default:
                cout<<menu<<"\n\tIncorrect Input\n";
                break;
        }
    }while(option !=4);
    return 0;
}
