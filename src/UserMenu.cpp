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
void UserMenu::clear()                                
{
    system("clear");
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
            AddAirplane();
            break;
        case 2:   
            DeleteAirplane();
            break;
        case 3:
            AddFlight();
            break;
        case 4:
            DeleteFlight();         
            break;
        case 5:
            AddPilot();
            break;
        case 6:
            DeletePilot();
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
            ShowMenu();
        }
    }
}



//---------------------------------------------------------------
void UserMenu::AddAirplane()
{
    clear();
    if(airportmanager.airplane.size() > NumberOfAirplanes)
        cout<<"We Reach the Maximum Number of Airplane...";
    else
    { 
        size_t TypeNum;
        string identity_code;
        double capacity;

        cout << "enter type of Airplane [1 for Cargo,2 for Airliner] : ";
        cin>>TypeNum;

        cout<<"enter IdentityCode of Airplane : ";
        cin>>identity_code;

        if(TypeNum == 1)
        {
            cout << "enter Maximum tolerable weight (capacity) : ";
            cin >>capacity;
            clear();
            airportmanager.airplane.push_back(new CargoPlane(identity_code,capacity));
            cout<<"\t\t<your airplane>"<<endl;
            airportmanager.airplane.back()->PrintInfo();         
        }
        else if (TypeNum == 2)
        {
            cout << "enter Maximum number of passangers (capacity) : ";
            cin >>capacity;
            clear();
            airportmanager.airplane.push_back(new Airliner(identity_code,capacity));
            cout<<"\t\t<your airplane>"<<endl;
            airportmanager.airplane.back()->PrintInfo();       
        }
    }
    StateFunc();
    
}
//-----------------------------------------------------------------
void UserMenu::DeleteAirplane()
{
    clear();
    string IdentityCode;
    bool Found = false;
    cout<<"enter IdentityCode of Airplane : ";
    cin>>IdentityCode;
    for(size_t i=0 ; i< airportmanager.airplane.size();i++)
    {
        if(IdentityCode == airportmanager.airplane.at(i) ->GetIdentityCode())
        {
            Found = true;
            vector <AirPlane*> :: iterator iter=airportmanager.airplane.begin();
            airportmanager.airplane.erase(iter+i,iter+1+i);
            cout<<"deleted ..."<<endl;
        }
    }
    if(Found == false )
        cout<<"not found ... :/"<<endl;
    
    StateFunc();
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
void UserMenu::AddFlight()
{
    clear();
    if(airportmanager.flight.size() > NumberOFFlights)
        cout<<"We Reach the Maximum Number  of Flights...";
    else
    { 
        bool added = false;
        string origin,destination,airplane_identity,pilot_identity;

        cout<<"enter Origin : ";
        cin>>origin;

        cout<<"enter destination : ";
        cin>>destination;

        cout<<"enter Airplane Identity code : ";
        cin>>airplane_identity;

        cout<<"enter Pilot Identity code : ";
        cin>>pilot_identity;

        clear();

        airportmanager.flight.push_back(new Flight(origin,destination,airplane_identity,pilot_identity)) ;  
        cout<<"\t\t<your Flight>"<<endl;  
        airportmanager.flight.back()->PrintInfo(); 
    }
    StateFunc();
}
//-------------------------------------------------------------
void UserMenu::DeleteFlight()
{
    clear();
    string pilot_ID,Airplane_ID;
    bool Found = false;
    cout<<"enter IdentityCode of Airplane : ";
    cin>>Airplane_ID;
    cout<<"enter IdentityCode of Pilot : ";
    cin>>pilot_ID;
    for(size_t i=0 ; i<airportmanager.flight.size();i++)
    {
        if(pilot_ID == airportmanager.flight.at(i) ->GetPilotIdentityCode() and
            Airplane_ID == airportmanager.flight.at(i) -> GetAirPlaneIdentityCode())
            {
                Found = true;
                vector <Flight*> :: iterator iter=airportmanager.flight.begin();
                airportmanager.flight.erase(iter+i,iter+1+i);
                cout<<"deleted ..."<<endl;
            }
    }
    if(Found == false )
        cout<<"not found ... :/"<<endl;
    
    StateFunc();
}
//-------------------------------------------------------------
void UserMenu::AddPilot()
{
    clear();
    if(airportmanager.flight.size() > NumberOFFlights)
        cout<<"We Reach the Maximum Number  of Flights...";
    else
    {
        size_t TypeNum;
        string identity_code;
        string  lastname;
        unsigned short int age;
        unsigned short int flight_num;
        unsigned short int degree;

        cout << "enter type of Pilot [1 for Rookie,2 for Professional] : ";
        cin>>TypeNum;

        cout<<"enter IdentityCode of Pilot : ";
        cin>>identity_code;

        cout<<"enter Last Name of Pilot : ";
        cin>>lastname;

        cout<<"enter Age of Pilot : ";
        cin>>age;

        if(TypeNum == 1)
        {
            cout << "enter Number of Flights(since) : ";
            cin >>flight_num;
            clear();
            airportmanager.pilot.push_back(new RookiePilot(lastname,identity_code,age,flight_num));
            cout<<"\t\t<your airplane>"<<endl;
            airportmanager.pilot.back()->PrintInfo();         
        }
        else if (TypeNum == 2)
        {
            cout << "enter Professional Degree : ";
            cin >>degree;
            clear();
            airportmanager.pilot.push_back(new ProfessionalPilot(lastname,identity_code,age,degree));
            cout<<"\t\t<your airplane>"<<endl;
            airportmanager.pilot.back()->PrintInfo();      
        }
    }
    StateFunc();
    
}
//-------------------------------------------------------------
void UserMenu::DeletePilot()
{
    clear();
    string pilot_ID;
    bool Found = false;
    cout<<"enter IdentityCode of Pilot : ";
    cin>>pilot_ID;
    for(size_t i=0 ; i<airportmanager.pilot.size();i++)
    {
        if(pilot_ID == airportmanager.pilot.at(i) ->GetIdentityCode())    
        {
            Found = true;
            vector <Pilot*> :: iterator iter=airportmanager.pilot.begin();
            airportmanager.pilot.erase(iter+i,iter+1+i);
            cout<<"deleted ..."<<endl;
        }
    }
    if(Found == false )
        cout<<"not found ... :/"<<endl;
    
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