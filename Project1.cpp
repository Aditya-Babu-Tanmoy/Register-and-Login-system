
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int a=0;/// To count the number of action

struct reg /// Make a structure to store multiple set of data
{
    long long int id;
    string name;
    string email;
    string password;
} R[25]; /// can store 0 to 25 set of data


void RegisterAccount() /// Function of register account
{

    system("cls");
    int ascii=178;
    char ch=ascii, d;
    cout<<"\n ";
    for(int i=1; i<=25; i++)
        cout<<ch;
    cout<<" REGISTRATION WINDOW ";
    for(int i=1; i<=25; i++)
        cout<<ch;
    cout<<"\n\n\n "<<ch<<ch<<"Enter user ID "<<" ";
    cin>>R[a].id;
    cin.ignore(); //clearing new line character
    cout<<"\n\n "<<ch<<ch<<"Enter user Name "<<" ";
    getline(cin, R[a].name);
    cout<<"\n\n "<<ch<<ch<<"Enter user Email "<<" ";
    cin>>R[a].email;
    cout<<"\n\n "<<ch<<ch<<"Enter user Password "<<" ";
    do
    {
        d=getch();
        if(isdigit(d) || isalpha(d) || ispunct(d))
        {
            R[a].password += d;
            cout<<"*";
        }
    }
    while(isdigit(d) || isalpha(d) || ispunct(d));
    a++;
    cout<<"\n\n "<<ch<<ch<<" Account registered successfully "<<ch<<ch;
}

void Login()
{
    system("cls");
    int ascii=178;
    char ch=ascii,d;
    for(int i=1; i<=25; i++)
        cout<<ch;
    cout<<" LOGIN WINDOW ";
    for(int i=1; i<=25; i++)
        cout<<ch;
    if(a==0)
        cout<<"\n\n "<<ch<<ch<<" No Record Found "<<ch<<ch;
    else
    {
        bool found=false;
        string temail, tpassword;
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
            if(temail==R[k].email && tpassword==R[k].password)
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

void ForgotEmail()
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
            if(tpassword==R[k].password)
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

void ForgotPassword()
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
            if(temail==R[k].email)
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
void OpenAll() /// For developers Only
{
    system("cls");
    int ascii=178;
    char ch=ascii,d;
    for(int i=1; i<=25; i++)
        cout<<ch;
    cout<<" DEVELOPER WINDOW ";
    for(int i=1; i<=25; i++)
        cout<<ch;
    if(a==0)
        cout<<"\n\n "<<ch<<ch<<" No Record Found "<<ch<<ch;
    else
    {
        for(int k=0; k<a; k++)
        {
            cout<<"\n\n\n "<<ch<<ch<<" User ID "<<R[k].id;
            cout<<"\n\n "<<ch<<ch<<" User Name "<<R[k].name;
            cout<<"\n\n "<<ch<<ch<<" User Email "<<R[k].email;
            cout<<"\n\n "<<ch<<ch<<" User Password "<<R[k].password;
            cout<<"\n\n";
        }
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
    cin>>choice;
    switch(choice)
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
        break;
    case -1:
        OpenAll();
        break;
    default:
        cout<<"\n\n "<<ch<<ch<<" PLEASE SELECT VALID NUMBER"<<ch<<ch;
    }
    getch();
    goto p;
}

