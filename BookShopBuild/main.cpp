#include <iostream>
#include <string.h>
#include <sstream>
#include <limits>
#include <vector>
#include "Book.h"
#include "Shop.h"
#include "Menu.h"




int main()
{
    Shop shop;
    Menu menu(shop);
    menu.ShowMainMenu();
    return 0;
}