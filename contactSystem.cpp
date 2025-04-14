#include <iostream>
#include <string.h>
using namespace std;

class contacts
{
private:
    char name[30];
    char number[15];
    contacts *next;

public:
    void addContact();
    void deleteContact();
    void updateContact();
    void searchContact();
    void viewAllContact();
};
contacts *firstContact = NULL;
// This function will add contact
void contacts::addContact()
{
    contacts *newNumber = new contacts;
    contacts *temp = firstContact;
    if (newNumber == NULL)
    {
        cout << "\n\nSorry! memory is full\n";
        return;
    }
    cout << "\nEnter contact No.: ";
    cin.sync();
    cin.getline(newNumber->number,15);
    cin.sync();
    cout << "Enter name: ";
    cin.getline(newNumber->name,30);
    if (firstContact == NULL)
    {
        newNumber->next = NULL;
        firstContact = newNumber;
        cout << "\nContact number is successfully saved\n";
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    newNumber->next = NULL;
    temp->next = newNumber;
    cout << "\nContact number is successfully saved\n";
}
// This function will delete contact
void contacts::deleteContact()
{
    char delete_No[30];
    if (firstContact == NULL)
    {
        cout << "\nThere is no contact!\n";
        return;
    }
    contacts *firstTemp = firstContact->next;
    contacts *firstTemp1 = firstContact;
    cout << "\nEnter contact No.: ";
    cin.sync();
    cin.getline(delete_No,15);
    if (firstTemp == NULL)
    {
        if (strcmp(firstTemp1->number, delete_No) == 0)
        {
            firstContact = firstTemp1->next;
            free(firstTemp1);
            cout << "\nContact number is successfully deleted\n";
            return;
        }
    }
    while ((firstTemp != NULL))
    {
        if (strcmp(firstTemp->number, delete_No) == 0)
        {
            firstTemp1->next = firstTemp->next;
            free(firstTemp);
            cout << "\nContact number is successfully deleted\n";
            return;
        }
        firstTemp = firstTemp->next;
        firstTemp1 = firstTemp1->next;
    }
    cout << "\nContact number is not found\n\n";
}
// This function will update contact
void contacts::updateContact()
{
    char newNo[15], oldNo[15], newName[30];
    int choose;
    if (firstContact == NULL)
    {
        cout << "\nThere is no contacts!\n\n";
    }
    contacts *firstTemp = firstContact;
    cout << "\nEnter contact No.: ";
    cin.sync();
    cin.getline(oldNo,15);
    while (firstTemp != NULL)
    {
        if (strcmp(firstTemp->number, oldNo) == 0)
        {
            cout << "\nPress 1 to change number\n";
            cout << "Press 2 to change name\n";
        again:
            cout << "Choose option :";
            cin.sync();
            cin >> choose;
            switch (choose)
            {
            case 1:
                cout << "Enter new No.: ";
                cin.sync();
                cin.getline(newNo,15);
                strcpy(firstTemp->number, newNo);
                break;
            case 2:
                cout << "Enter new name: ";
                cin.sync();
                cin.getline(newName,30);
                strcpy(firstTemp->name, newName);
                break;
            default:
                cout << "Invalid option try again\n";
                goto again;
            }
            cout << "\nContact number is successfully updated\n";
            return;
        }
        firstTemp = firstTemp->next;
    }
    cout << "\nContact number is not found\n";
}
// This function will search specific contact
void contacts::searchContact()
{
    char number[15];
    if (firstContact == NULL)
    {
        cout << "\nThere is no contacts\n\n";
    }
    int id;
    contacts *firstTemp = firstContact;
    cout << "\nEnter contact No.: ";
    cin.sync();
    cin.getline(number,15);
    while (firstTemp != NULL)
    {
        if (strcmp(firstTemp->number, number) == 0)
        {
            cout <<"\n1. "<< firstTemp->name << "\t" << firstTemp->number << endl;
            return;
        }
        firstTemp = firstTemp->next;
    }
    cout << "\nContact number is not found\n";
}
// This function will show all contacts
void contacts::viewAllContact()
{
    int i = 1;
    if (firstContact == NULL)
    {
        cout << "\nThere is no contacts\n\n";
    }
    contacts *firstTemp = firstContact;
    cout<<endl;
    while (firstTemp != NULL)
    {
        cout << i << ". " << firstTemp->name << "\t" << firstTemp->number << endl;
        firstTemp = firstTemp->next;
        i++;
    }
}
int main()
{
    int choose;
    contacts c1;
    cout << "\n -: WELCOME TO CONTACT MANAGEMENT SYSTEM PROJECT :-\n";
    do
    {
        cout << "\nPress 1 to Add new contact\n";
        cout << "Press 2 to Delete contact\n";
        cout << "Press 3 to Upadate contact\n";
        cout << "Press 4 to Search contact\n";
        cout << "Press 5 to View all contacts\n";
        cout << "Press 6 to Exit\n";
    again:
        cout << "Choose any option: ";
        cin.sync();
        cin >> choose;
        switch (choose)
        {
        case 1:
            c1.addContact();
            break;
        case 2:
            c1.deleteContact();
            break;
        case 3:
            c1.updateContact();
            break;
        case 4:
            c1.searchContact();
            break;
        case 5:
            c1.viewAllContact();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "\nInvalid option try again\n";
            goto again;
        }
    } while (1);
    return 0;
}