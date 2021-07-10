#include "../include/UserMenu.hpp"
using namespace std;

UserMenu::UserMenu()
{

}
//--------------------------------------------------------
UserMenu::~UserMenu()
{

}
//--------------------------------------------------------
void UserMenu::ShowMenu()
{
       
    clear();               
    cout<<" *****************************************************"<<endl;
    cout<<" *****************************************************"<<endl;
    cout<<"***************((AIRPORT MANAGEMENT))*******************"<<endl;    
    cout<<" *****************************************************"<<endl;
    cout<<" *****************************************************"<<endl;
    
//starting menu:
    cout<<"please enter a number:\n";
    cout<<setw(60)<<left<<"ADDING      AIRPLANE"<<"press : 1"<<endl;
    cout<<setw(60)<<left<<"DELETING    AIRPLANE"<<"press : 2"<<endl;
    cout<<setw(60)<<left<<"ADDING      FLIGHT"<<"press : 3"<<endl;
    cout<<setw(60)<<left<<"DELETING    FLIGHT"<<"press : 4"<<endl;
    cout<<setw(60)<<left<<"ADDING      PILOT"<<"press : 5"<<endl;
    cout<<setw(60)<<left<<"DELETING    PILOT"<<"press : 6"<<endl;
    cout<<setw(60)<<left<<"SHOWING ALL FLIGHTS REPORT"<<"press : 7"<<endl;
    cout<<setw(60)<<left<<"SHOWING ALL AIRPLANES REPORT"<<"press : 8"<<endl;
    cout<<setw(60)<<left<<"SHOWING ALL PILOTS"<<"press : 9"<<endl;
    cout<<setw(60)<<left<<"EXIT PROGRAM"<<"press : 0"<<endl;    
}


//-----------------------------------------------------------------
int UserMenu::GetOptionFromUser()
{
    int option;
    option=getch();         //option uses to select an item
    return option;
}
//-----------------------------------------------------------------
void UserMenu::MenuManager()
{
    fflush(stdin);
    ShowLoadingTitle();
    int option=rand()+1;        //initializing by a random value greater than zero
   
    while(option!=0)
    {
        ShowMenu();
        option=GetOptionFromUser();
    
        switch (option-48){
        case 0:
            Exit();
            break;
        case 1:
            airportmanager.AddAirplane();
            break;
        case 2:   
            airportmanager.DeleteAirplane();
            break;
        case 3:
            airportmanager.AddFlight();
            break;
        case 4:
            airportmanager.DeleteFlight();         
            break;
        case 5:
            airportmanager.AddPilot();
            break;
        case 6:
            airportmanager.DeletePilot();
            break;
        case 7:
            ShowAllFlightsReport();
            break;
        case 8:
            ShowAllAirplanesReport();
            break;
        case 9:
            ShowAllPilotsReport();
            break;
        default :
            clear();
            cout<<"wrong option inserted\n";
            cout<<"press enter to continue...";
            getch();
            //ShowMenu();
        }
        StateFunc();
    }
}
//-----------------------------------------------------------
void UserMenu::ShowAllFlightsReport()
{
    clear();
    cout <<"\t\t\t<Flights>"<<endl;
    for (size_t i = 0; i < airportmanager.flight.size(); i++)
    {
        airportmanager.flight.at(i)->PrintInfo();
        PrintLine(); 
    } 
    StateFunc();
}

//------------------------------------------------------------
void UserMenu::ShowAllAirplanesReport()
{
    clear();
    cout <<"\t\t\t<Airliners>"<<endl;

    for (size_t i = 0; i < airportmanager.airplane.size(); i++)
    {
        if(dynamic_cast<Airliner*> (airportmanager.airplane.at(i)) != nullptr)
        {
            airportmanager.airplane.at(i)->PrintInfo();
            PrintLine();
        }       
    }
    
    PrintLine('=');
    PrintLine('=');

    cout<<"\t\t\t<CargoPlanes>"<<endl;
    for (size_t i = 0; i < airportmanager.airplane.size(); i++)
    {
        if(airportmanager.airplane.at(i) != nullptr )
        { 
           if(dynamic_cast<CargoPlane*> (airportmanager.airplane.at(i)) != nullptr)
           {
                airportmanager.airplane.at(i)->PrintInfo();
                PrintLine();
           }
        }     
    }
    StateFunc(); 
}
//-------------------------------------------------------------
void UserMenu::ShowAllPilotsReport()
{
    clear();
    cout <<"\t\t\t<Rookie Pilots>"<<endl;

    for (size_t i = 0; i < airportmanager.pilot.size(); i++)
    {
        if(dynamic_cast<RookiePilot*> (airportmanager.pilot.at(i)) != nullptr)
        {
             airportmanager.pilot.at(i)->PrintInfo();
             PrintLine();
        }     
    }
    
    PrintLine('=');
    PrintLine('=');
    
    cout<<"\t\t\t<Professional Pilot>"<<endl;
    for (size_t i = 0; i < airportmanager.pilot.size(); i++)
    { 
        if(dynamic_cast<ProfessionalPilot*> (airportmanager.pilot.at(i)) != nullptr)
        {
             airportmanager.pilot.at(i)->PrintInfo();
             PrintLine();
        }      
    }
    StateFunc();
}
//-------------------------------------------------------------
void UserMenu::PrintLine(char entered_char )
{
    for (size_t i = 0; i < 80; i++)
    {
        cout<<entered_char;
    }
    cout<<endl;
}
//-----------------------------------------------------------------
void UserMenu::StateFunc()                            
{
    cout<<"\n\nnote::\tfor return press: [r] \tfor exit press: [e]"<<endl;
    int state;
    state=getch();

    if(state=='r')
        return;
    else
        if(state=='e')
            Exit();
}
//----------------------------------------------------------------------
bool UserMenu::Confirm(string title)                      
{
    clear();
    cout<<"are you sure to  "<<title<<" ? [y,n]\n";
    while(1)
    {
        char T;
        bool flag;
        T=getch();
        if(tolower(T)=='y')
        {
            flag=true;
            clear();
            return flag;
        }
        else if (tolower(T)=='n')
        {
            flag=false;
            clear();
            return flag;
        }
        cout<<"wrong option entered \nplease enter [y,n]\n";
    }  
}
//-----------------------------------------------------------------
void UserMenu::ShowLoadingTitle()
{
    for (size_t i = 0; i <= 25; i++)
    {
        clear();
        cout<<"\t\t<LOADING>"<<"\t\t"<<i*4<<"%"<<endl;
        for(size_t j=0; j<=i;j++)
            cerr<<"|";
        Sleep(10);
    }
    Sleep(2000);  
}
//---------------------------------------------------------------------
void UserMenu::Exit()                                 
{
    if(Confirm("exit"))
    {
        cout<<"*******<<goodbye>>************************************"<<endl;
        cout<<"***************<<goodbye>>****************************"<<endl;
        cout<<"***********************<<goodbye>>********************"<<endl;
        cout<<"*******************************<<goodbye>>************"<<endl;
        cout<<"press any key to continue..."<<endl;
        getch();
        clear();
        exit(1);
    }
}
//-----------------------------------------------------------------
void UserMenu::clear()                                
{
    system("clear");
}