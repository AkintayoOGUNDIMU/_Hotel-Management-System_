#include <iostream>
using namespace std;

//GLOBAL VARIABLE AND FUNCTION DECLARATION
void initMessage();
void intro();
int opt = 3, _choice;
void doAdmin();
void doStaff();
void doGuest();
int repeat = 0;
int loop = 1;

int checkPass();





    int main()
 {
        char YN;

        do  //a do-while loop that makes the program repititive incase user wants to continue using service
        {
        initMessage();
        intro();

        cout << "do you want to check out our service again? \t Y/N \n";
        cin >> YN;
        YN = toupper(YN); // function that takes care  of the upper and lower case character option from user.

        if (YN == 'N')
            loop = ~loop;
        }
        while (loop = 1);



      return 0;
 }

 // FUNCTION DEFINITION
void initMessage()
{
    // introductory messsaage
    cout<< " \t\tWELCOME TO A.K HOTEL AND SUITES \n";
    cout<< "\t We are committed to giving you a pleasurable experience \n \n";
    cout<< "please choose correctly the option below to get the Service you want \n 1. ADMIN \n 2. STAFF \n 3. GUEST \n";
    cout<< "  ";
    cin >>  _choice;

return initMessage();
}


// FUNCTION DEFINITION
void intro()
{

    if(_choice == 1)
     doAdmin();
    else if(_choice == 2)
     doStaff();
    else if (_choice == 3)
     doGuest();
    else
    {
     cout<< "\n pls choose a correct option \n";
    }

 return intro();
}

// FUNCTION DEFINITION
void doAdmin()
{
    string username;
    string password;
    cout<< "please provide your login details \n";
    cout<< "USERNAME: " ;
    cin>> username;
    cout << "\n";
    cout<< "PASSWORD: " ;
    cin>> password;
    cout << "\n";



        cout<< " \t WHICH SERVICE DO YOU WANT TO INVESTIGATE  \n";
        cout<< " 1. AVAILABLE ROOMS. \n 2. AVAILABLE DRINKS and FOOD ITEMS. \n 3. CHECK THE SALES AND BOOKINGS INVOICES  \n 4. MONITOR THE SECURITY FOOTAGE. \n 5. CALL A STAFF. \n\n 6. Logout. \n";
        cin>> opt;

}
// FUNCTION DEFINITION
void doStaff()
{
    string username;
    string password;
    cout<< "please provide your login details \n";
    cout<< "USERNAME:    " ;
    cin>> username;
    cout << "\n";
    cout<< "PASSWORD: " ;
    cin>> password;
    cout << "\n";

    cout<< " 1. BOOK A ROOM(S). \n 2. ORDER FOR DRINKS. \n 3. ORDER FOR FOOD ITEMS OR SNACKS. \n 4. BOOK A TABLE SPACE AT THE BAR. \n 5. CALL THE RECEPTION. \n\n 6. Logout. \n";
    cin>> opt;




}
// FUNCTION DEFINITION
void doGuest()
{
    cout<< " \t PLEASE CHOOSE BELOW THE SERVICE YOU WANT \n";
    cout<< " 1. BOOK A ROOM(S). \n 2. ORDER FOR DRINKS. \n 3. ORDER FOR FOOD ITEMS OR SNACKS. \n 4. BOOK A TABLE SPACE AT THE BAR. \n 5. CALL THE RECEPTION. \n\n 6. Logout. \n";
    cin>> opt;

}
