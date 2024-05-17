#ifndef MENU_H
#define MENU_H

typedef struct menuContent
{
    char menuFunctionName[20];

    void (*pFunction)();
}MenuContent;

typedef struct menu
{
    int maxMenuNumber;

	char title[30];

	MenuContent menuList[20];
}Menu;

void printMenu(Menu* pMenu);

#endif