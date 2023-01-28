#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void mainMenu();
class Management{
public:
    Management()
    {
        mainMenu();
    }
};
class Details
{
public:
    static string name, gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information()
    {
        cout<<"\nEnter the customer ID:";
        cin>>cId;
        cout<<"\nEnter the name :";
        cin>>name;
        cout<<"\nEnter the age :";
        cin>>age;
        cout<<"\n Address :";
        cin>>add;
        cout<<"\n Gender :";
        cin>>gender;
        cout<<"Your details are saved with us\n"<<endl;
    }
};
int Details::cId;
string Details::name;
string Details::gender;

class registeration
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
        for(int a=0;a<6;a++)
        {
            cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
        }

        cout<<"\nWelcome to the Airlines!"<<endl;
        cout<<"Press the number of the country of ehich you want to book the flight:";
        cin>>choice;

        switch(choice)
        {
        case 1:
            {

                cout<<"_______________Welcome to Dubai Emirates________________\n"<<endl;

                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1. DUB - 498"<<endl;
                cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;
                cout<<"1. DUB - 658"<<endl;
                cout<<"\t09-01-2022 4:00AM 12hrs Rs. 10000"<<endl;
                cout<<"1. DUB - 608"<<endl;
                cout<<"\t11-01-2022 11:00AM 11hrs Rs. 9000"<<endl;

                cout<<"\n Select the flight you want to book :";
                cin>>choice;

                if(choice==1)
                {
                    charges=14000;
                    cout<<"\nYou have successfully booked the flight DUB-498"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                if(choice==2)
                {
                    charges=10000;
                    cout<<"\nYou have successfully booked the flight DUB-658"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                if(choice==3)
                {
                    charges=9000;
                    cout<<"\nYou have successfully booked the flight DUB-608"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flights();

                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }

            }
        case 2:
            {
                 cout<<"_______________Welcome to Canadian Airlines________________\n"<<endl;

                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1. CA - 198"<<endl;
                cout<<"\t09-01-2022 8:00AM 10hrs Rs. 34000"<<endl;
                cout<<"1. CA - 208"<<endl;
                cout<<"\t21-01-2022 6:00AM 12hrs Rs. 20000"<<endl;
                cout<<"1. DUB - 158"<<endl;
                cout<<"\t14-01-2022 12:00AM 11hrs Rs. 19000"<<endl;

                cout<<"\n Select the flight you want to book :";
                cin>>choice;

                if(choice==1)
                {
                    charges=34000;
                    cout<<"\nYou have successfully booked the flight CA-198"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                if(choice==2)
                {
                    charges=20000;
                    cout<<"\nYou have successfully booked the flight CA-208"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                if(choice==3)
                {
                    charges=19000;
                    cout<<"\nYou have successfully booked the flight CA-158"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flights();

                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }

            }
        case 3:
            {
                 cout<<"_______________Welcome to UK Airways________________\n"<<endl;

                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1. UK- 498"<<endl;
                cout<<"\t12-01-2022 10:00AM 14hrs Rs. 44000"<<endl;


                cout<<"\n Select the flight you want to book :";
                cin>>choice;

                if(choice==1)
                {
                    charges=44000;
                    cout<<"\nYou have successfully booked the flight UK-498"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }

                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flights();

                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }

            }
        case 4:
            {
                 cout<<"_______________Welcome to US  Airways________________\n"<<endl;

                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1. US - 567"<<endl;
                cout<<"\t10-01-2022 9:00AM 22hrs Rs. 37000"<<endl;
                cout<<"1. US - 658"<<endl;
                cout<<"\t09-01-2022 4:00AM 12hrs Rs. 39000"<<endl;
                cout<<"1. US - 608"<<endl;
                cout<<"\t11-01-2022 11:00AM 11hrs Rs. 42000"<<endl;

                cout<<"\n Select the flight you want to book :";
                cin>>choice;

                if(choice==1)
                {
                    charges=37000;
                    cout<<"\nYou have successfully booked the flight US-498"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                if(choice==2)
                {
                    charges=39000;
                    cout<<"\nYou have successfully booked the flight US-658"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                if(choice==3)
                {
                    charges=42000;
                    cout<<"\nYou have successfully booked the flight US-608"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flights();

                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }

            }
        case 5:
            {
                 cout<<"_______________Welcome to Australian Airlines________________\n"<<endl;

                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1. AS - 498"<<endl;
                cout<<"\t08-01-2022 8:00AM 10hrs Rs. 44000"<<endl;
                cout<<"1. AS - 658"<<endl;
                cout<<"\t09-01-2022 4:00AM 12hrs Rs. 32000"<<endl;
                cout<<"1. AS - 608"<<endl;
                cout<<"\t11-01-2022 11:00AM 11hrs Rs. 42000"<<endl;

                cout<<"\n Select the flight you want to book :";
                cin>>choice;

                if(choice==1)
                {
                    charges=44000;
                    cout<<"\nYou have successfully booked the flight AS-498"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                if(choice==2)
                {
                    charges=32000;
                    cout<<"\nYou have successfully booked the flight AS-658"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                if(choice==3)
                {
                    charges=42000;
                    cout<<"\nYou have successfully booked the flight AS-608"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flights();

                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }

            }
        case 6:
            {
                 cout<<"_______________Welcome to European Airlines________________\n"<<endl;

                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1. EU- 498"<<endl;
                cout<<"\t08-01-2022 8:00AM 10hrs Rs. 33000"<<endl;
                cout<<"1. EU - 658"<<endl;
                cout<<"\t09-01-2022 4:00AM 12hrs Rs. 35000"<<endl;
                cout<<"1. EU - 608"<<endl;
                cout<<"\t11-01-2022 11:00AM 11hrs Rs. 37000"<<endl;

                cout<<"\n Select the flight you want to book :";
                cin>>choice;

                if(choice==1)
                {
                    charges=33000;
                    cout<<"\nYou have successfully booked the flight EU498"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                if(choice==2)
                {
                    charges=35000;
                    cout<<"\nYou have successfully booked the flight EU-658"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                if(choice==3)
                {
                    charges=37000;
                    cout<<"\nYou have successfully booked the flight EU-608"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flights();

                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }

            }
        default:
            {

                cout<<"Invalid input, Shifting you to the main menu !"<<endl;
                mainMenu();
                break;
            }
        }

    }
};
float registeration::charges;
int registeration::choice;

class ticket : public registeration,Details
{
public:
    void Bill()
    {

        string destination="";
        ofstream outf("records.txt");
        {
            cout<<"_________XYZ Airlines_________"<<endl;
            outf<<"_________Ticket_______________"<<endl;
            outf<<"______________________________"<<endl;

            outf<<"Customer ID: "<<Details::cId<<endl;
            outf<<"Customer Name: "<<Details::name<<endl;
            outf<<"Customer Gender:"<<Details::gender<<endl;
            outf<<"\tDescription"<<endl;

            if(registeration::choice==1)
            {
                destination="Dubai";
            }
            else if(registeration::choice==2)
            {
                destination="Canada";
            }
            else if(registeration::choice==3)
            {
                destination="UK";
            }
            else if(registeration::choice==4)
            {
                destination="USA";
            }
            else if(registeration::choice==5)
            {
                destination="Australia";
            }
            else if(registeration::choice==6)
            {
                destination="Europe";
            }
            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Fight cost :\t\t"<<registeration::charges<<endl;
        }
        outf.close();
    }
    void dispBill()
    {
        ifstream ifs("records.txt");
        {
            if(ifs)
            {
                cout<<"File error!"<<endl;
            }
            while(!ifs.eof())
            {
                ifs.getline(arr, 100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }
};
void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout<<"\t         XYZ Airlines\n"<<endl;
    cout<<"\t_________Main Menu_________"<<endl;

    cout<<"\t__________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t\|"<<endl;
    cout<<"\t|\t Press 1 to add the Customer Details \t|"<<endl;
    cout<<"\t|\t Press 2 for flight Registeration \t|"<<endl;
    cout<<"\t|\t Press 3 for Ticket and charges \t|"<<endl;
    cout<<"\t|\t Press 4 to Exit \t|"<<endl;
    cout<<"\t|\t\t\t\t\t\t\|"<<endl;

    cout<<"Enter the Choice : ";
    cin>>lchoice;

    Details d;
    registeration r;
    ticket t;

    switch(lchoice)
    {

    case 1:
        {
            cout<<"_________Customers_______\n"<<endl;
            d.information();
            cout<<"Press any to go back to the main menu ";
            cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else{
                mainMenu();
            }
            break;

        }
    case 2:
        {
            cout<<"________Book a flight using this system_________\n"<<endl;
            r.flights();
            break;
        }
    case 3:
        {
            cout<<"_____GET YOUR TICKET_____\N"<<endl;
            t.Bill();

            cout<<"Your ticket is printed, you can collect it \n"<<endl;
            cout<<"Press 1 to display your ticket ";
            cin>>back;
            if(back==1)
            {
                t.dispBill();
                cout<<"Press any key to goback to main menu:";
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            else{
                mainMenu();
            }
            break;

        }
    case 4:
        {
            cout<<"\n\n\t________Thank-you______"<<endl;
            break;
        }
    default:
        {
            cout<<"Invalid input, Please try again!\n"<<endl;
            mainMenu();
            break;
        }


    }

}

int main()
{
    Management Mobj;
    return 0;
}
