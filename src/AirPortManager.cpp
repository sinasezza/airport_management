#include "../include/AirPortManager.hpp"


AirportManager::AirportManager()
{
    //this is default constructor....
    
}
//-------------------------------------------------------------
AirportManager::~AirportManager()
{

}
//-------------------------------------------------------------
void AirportManager::AddFlight()
{
    clear();
    if(flight.size() > NumberOFFlights)
        cout<<"We Reach the Maximum Number  of Flights...";
    else
    { 
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

        flight.push_back(new Flight(origin,destination,airplane_identity,pilot_identity)) ;  
        cout<<"\t\t<your Flight>"<<endl;  
        flight.back()->PrintInfo(); 
    }   
}
//-------------------------------------------------------------
void AirportManager::DeleteFlight()
{
    clear();
    string pilot_ID,Airplane_ID;
    bool Found = false;
    cout<<"enter IdentityCode of Airplane : ";
    cin>>Airplane_ID;
    cout<<"enter IdentityCode of Pilot : ";
    cin>>pilot_ID;
    for(size_t i=0 ; i<flight.size();i++)
    {
        if(pilot_ID == flight.at(i) ->GetPilotIdentityCode() and
            Airplane_ID == flight.at(i) -> GetAirPlaneIdentityCode())
            {
                Found = true;
                vector <Flight*> :: iterator iter=flight.begin();
                flight.erase(iter+i,iter+1+i);
                cout<<"deleted ..."<<endl;
            }
    }
    if(Found == false )
        cout<<"not found ... :/"<<endl;  
}
//---------------------------------------------------------------
void AirportManager::AddAirplane()
{
    clear();
    if(airplane.size() > NumberOfAirplanes)
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
            airplane.push_back(new CargoPlane(identity_code,capacity));
            cout<<"\t\t<your airplane>"<<endl;
            airplane.back()->PrintInfo();         
        }
        else if (TypeNum == 2)
        {
            cout << "enter Maximum number of passangers (capacity) : ";
            cin >>capacity;
            clear();
            airplane.push_back(new Airliner(identity_code,capacity));
            cout<<"\t\t<your airplane>"<<endl;
            airplane.back()->PrintInfo();       
        }
    } 
}
//-----------------------------------------------------------------
void AirportManager::DeleteAirplane()
{
    clear();
    string IdentityCode;
    bool Found = false;
    cout<<"enter IdentityCode of Airplane : ";
    cin>>IdentityCode;
    for(size_t i=0 ; i< airplane.size();i++)
    {
        if(IdentityCode == airplane.at(i) ->GetIdentityCode())
        {
            Found = true;
            vector <AirPlane*> :: iterator iter=airplane.begin();
            airplane.erase(iter+i,iter+1+i);
            cout<<"deleted ..."<<endl;
        }
    }
    if(Found == false )
        cout<<"not found ... :/"<<endl;   
}
//-------------------------------------------------------------
void AirportManager::AddPilot()
{
    clear();
    if(flight.size() > NumberOFFlights)
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
            pilot.push_back(new RookiePilot(lastname,identity_code,age,flight_num));
            cout<<"\t\t<your airplane>"<<endl;
            pilot.back()->PrintInfo();         
        }
        else if (TypeNum == 2)
        {
            cout << "enter Professional Degree : ";
            cin >>degree;
            clear();
            pilot.push_back(new ProfessionalPilot(lastname,identity_code,age,degree));
            cout<<"\t\t<your airplane>"<<endl;
            pilot.back()->PrintInfo();      
        }
    }  
}
//-------------------------------------------------------------
void AirportManager::DeletePilot()
{
    clear();
    string pilot_ID;
    bool Found = false;
    cout<<"enter IdentityCode of Pilot : ";
    cin>>pilot_ID;
    for(size_t i=0 ; i<pilot.size();i++)
    {
        if(pilot_ID == pilot.at(i) ->GetIdentityCode())    
        {
            Found = true;
            vector <Pilot*> :: iterator iter=pilot.begin();
            pilot.erase(iter+i,iter+1+i);
            cout<<"deleted ..."<<endl;
        }
    }
    if(Found == false )
        cout<<"not found ... :/"<<endl;  
}
//---------------------------------------------------------------
//this function clears the screen
//Unix/Linux --> system("clear")
//windows    --> system("cls");
void AirportManager::clear()                                
{
    system("clear");
}
//---------------------------------------------------------------
void AirportManager::PrintLine(char entered_char )
{
    for (size_t i = 0; i < 80; i++)
    {
        cout<<entered_char;
    }
    cout<<endl;
}
//-----------------------------------------------------------------
