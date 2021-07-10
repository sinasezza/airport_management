#include "../include/AirportManager.hpp"
#include "../include/UserMenu.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    UserMenu usermenu;
    usermenu.MenuManager();
    cout << "code executed successfully :)"<<endl;
    return 0;
}