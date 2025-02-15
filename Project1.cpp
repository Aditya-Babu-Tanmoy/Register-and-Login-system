
#include<iostream>
#include<conio.h>
using namespace std;

int a=0;/// To count the registration

struct reg /// Make a structure to store multiple set of data
{
    long long int id;
    string name;
    string email;
    string password;
} R[25]; /// can store 0 to 25 set of data


void RegisterAccount() /// Function of register account
{

    system("cls"); /// To refresh 
    int ascii=178; /// Special Symbol
    char ch=ascii, d;
    cout<<"\n ";
    for(int i=1; i<=25; i++)
        cout<<ch;
    cout<<" REGISTRATION WINDOW ";
    for(int i=1; i<=25; i++)
        cout<<ch;
    cout<<"\n\n\n "<<ch<<ch<<"Enter user ID "<<" ";
    cin>>R[a].id; /// Input ID to store at structure[Line-8] 
    cout<<"\n\n "<<ch<<ch<<"Enter user Name "<<" ";
    cin>>R[a].name;/// Input name to store at structure[Line-8]
    cout<<"\n\n "<<ch<<ch<<"Enter user Email "<<" ";
    cin>>R[a].email;/// Input Email to store at structure[Line-8]
    cout<<"\n\n "<<ch<<ch<<"Enter user Password "<<" ";
    do 
    {
        d=getch(); /// Input Password 
        if(isdigit(d) || isalpha(d) || ispunct(d)) /// Password can be digits, symbols, letters
        {
            R[a].password += d; ///store at structure[Line-8]
            cout<<"*"; /// Use '*' symbol to hide password
        }
    }
    while(isdigit(d) || isalpha(d) || ispunct(d));/// check password exist or not
    a++;///  Increase the 'a' variable [Note: Any user can't login without Registering his account]
    cout<<"\n\n "<<ch<<ch<<" Account registered successfully "<<ch<<ch; /// See the successful message
}

void Login() /// Function for login account
{
    system("cls");
    int ascii=178;
    char ch=ascii,d;
    for(int i=1; i<=25; i++)
        cout<<ch;
    cout<<" LOGIN WINDOW ";
    for(int i=1; i<=25; i++)
        cout<<ch;
    if(a==0) /// Checking any account exist or not
        cout<<"\n\n "<<ch<<ch<<" No Record Found "<<ch<<ch;
    else
    {
        bool found=false; 
        string temail, tpassword; // Temporary string to check data with Structure's data
        cout<<"\n\n\n "<<ch<<ch<<"Enter user Email "<<" ";
        cin>>temail;
        cout<<"\n\n\n "<<ch<<ch<<"Enter user Password "<<" ";
        do
        {
            d=getch();
            if(isdigit(d) || isalpha(d) || ispunct(d))
            {
                tpassword += d;
                cout<<"*";
            }
        }
        while(isdigit(d) || isalpha(d) || ispunct(d));
        for(int k=0; k<a; k++)
        {
            if(temail==R[k].email && tpassword==R[k].password) // Check the password matching or not
            {
                cout<<"\n\n\n "<<ch<<ch<<" User ID "<<R[k].id;
                cout<<"\n\n "<<ch<<ch<<" User Name "<<R[k].name;
                cout<<"\n\n "<<ch<<ch<<" User Email "<<R[k].email;
                cout<<"\n\n "<<ch<<ch<<" User Password "<<R[k].password;
                found=true; // If all data matched than make the variable true
                break;
            }
        }
        if(!found) // If not match than show the Incorrect message
            cout<<"\n\n "<<ch<<ch<<" User data Incorrect "<<ch<<ch;
    }
}

void ForgotEmail()/// Function of Forgot Email [Note: We check the Password to Forgot Email]
{
    system("cls");
    int ascii=178;
    char ch=ascii,d;
    for(int i=1; i<=25; i++)
        cout<<ch;
    cout<<" FORGOT EMAIL ";
    for(int i=1; i<=25; i++)
        cout<<ch;
    if(a==0)
        cout<<"\n\n "<<ch<<ch<<" No Record Found "<<ch<<ch;
    else
    {
        bool found=false;
        string tpassword;
        cout<<"\n\n\n "<<ch<<ch<<"Enter user Password "<<" ";
        do
        {
            d=getch(); // Input the password 
            if(isdigit(d) || isalpha(d) || ispunct(d))
            {
                tpassword += d;
                cout<<"*";
            }
        }
        while(isdigit(d) || isalpha(d) || ispunct(d));
        for(int k=0; k<a; k++)
        {
            if(tpassword==R[k].password) /// Check the password
            {
                cout<<"\n\n\n "<<ch<<ch<<" User ID "<<R[k].id;
                cout<<"\n\n "<<ch<<ch<<" User Name "<<R[k].name;
                cout<<"\n\n "<<ch<<ch<<" User Email "<<R[k].email;
                cout<<"\n\n "<<ch<<ch<<" User Password "<<R[k].password;
                found=true;
                break;
            }
        }
        if(!found)
            cout<<"\n\n "<<ch<<ch<<" User data Incorrect "<<ch<<ch;
    }
}

void ForgotPassword() /// Function of Forgot password [Note: We check the Email to Forgot Password]
{
    system("cls");
    int ascii=178;
    char ch=ascii,d;
    for(int i=1; i<=25; i++)
        cout<<ch;
    cout<<" FORGOT PASSWORD ";
    for(int i=1; i<=25; i++)
        cout<<ch;
    if(a==0)
        cout<<"\n\n "<<ch<<ch<<" No Record Found "<<ch<<ch;
    else
    {
        bool found=false;
        string temail;
        cout<<"\n\n\n "<<ch<<ch<<"Enter user Email "<<" ";
        cin>>temail;
        while(isdigit(d) || isalpha(d) || ispunct(d));
        for(int k=0; k<a; k++)
        {
            if(temail==R[k].email) // Check email
            {
                cout<<"\n\n\n "<<ch<<ch<<" User ID "<<R[k].id;
                cout<<"\n\n "<<ch<<ch<<" User Name "<<R[k].name;
                cout<<"\n\n "<<ch<<ch<<" User Email "<<R[k].email;
                cout<<"\n\n "<<ch<<ch<<" User Password "<<R[k].password;
                found=true;
                break;
            }
        }
        if(!found)
            cout<<"\n\n "<<ch<<ch<<" User data Incorrect "<<ch<<ch;
    }
}
int main()
{
p:
    system("cls");  /// To refresh Screen
    int ascii=178, choice;
    char ch = ascii;    /// TO show special design
    cout<<"\n";
    for(int i=1; i<=25; i++)
        cout<<ch;   /// Making Design
    cout<<" C++ new project ";
    for(int i=1; i<=25; i++)
        cout<<ch;   /// Making Design
    /// Showing Instructions
    cout<<"\n\n\n "<<ch<<" 1. Register Account";
    cout<<"\n\n "<<ch<<" 2. Login Account";
    cout<<"\n\n "<<ch<<" 3. Forgot Email";
    cout<<"\n\n "<<ch<<" 4. Forgot Password";
    cout<<"\n\n "<<ch<<" 5. EXIT";
    cout<<"\n\n ";
    for(int i=1; i<=66; i++)
        cout<<ch;
    cout<<"\n\n\n Enter your choice "<<" ";
    cin>>choice; /// Input the choice
    switch(choice) /// Used switch case to Handle the Choice
    {
    case 1:
        RegisterAccount();
        break;
    case 2:
        Login();
        break;
    case 3:
        ForgotEmail();
        break;
    case 4:
        ForgotPassword();
        break;
    case 5:
        exit(0);
    default:
        cout<<"\n\n "<<ch<<ch<<" PLEASE SELECT VALID NUMBER"<<ch<<ch;
    }
    getch();
    goto p; // To refresh the code
}
