# ConnectSphere - Contact Management System

ConnectSphere is a console-based Contact Management System implemented in C++ using a linked list data structure. It allows users to efficiently manage contacts by adding, deleting, updating, searching, and viewing contact details.

## Features
- **Add Contact**: Save a new contact with a name and phone number.
- **Delete Contact**: Remove a contact by phone number.
- **Update Contact**: Modify a contact's name or phone number.
- **Search Contact**: Find a contact by phone number and display their details.
- **View All Contacts**: List all saved contacts with their names and numbers.
- **Linked List Implementation**: Contacts are stored in a dynamic linked list for efficient memory usage.

## Prerequisites
- C++ compiler (e.g., g++, MinGW, or any IDE like Visual Studio, Code::Blocks)
- Basic understanding of C++ programming and console-based applications

## Installation
1. **Clone the Repository**:
   ```bash
   git clone https://github.com/your-username/ConnectSphere.git
   cd ConnectSphere
   ```

2. **Compile the Code**:
   Use a C++ compiler to compile the source code. For example, with g++:
   ```bash
   g++ main.cpp -o ConnectSphere
   ```

3. **Run the Program**:
   Execute the compiled program:
   ```bash
   ./ConnectSphere
   ```

## Usage
1. Launch the program, and you’ll see the main menu:
   ```
   -: WELCOME TO CONTACT MANAGEMENT SYSTEM PROJECT :-
   Press 1 to Add new contact
   Press 2 to Delete contact
   Press 3 to Update contact
   Press 4 to Search contact
   Press 5 to View all contacts
   Press 6 to Exit
   Choose any option:
   ```

2. Select an option by entering a number (1–6):
   - **Option 1**: Enter a phone number and name to add a contact.
   - **Option 2**: Enter a phone number to delete a contact.
   - **Option 3**: Enter a phone number, then choose to update the name or number.
   - **Option 4**: Enter a phone number to search and display the contact’s details.
   - **Option 5**: View a list of all contacts.
   - **Option 6**: Exit the program.

3. Follow the prompts to interact with the system. The program will confirm actions (e.g., "Contact number is successfully saved") or notify you if a contact is not found.

## Code Structure
- **Class `contacts`**: Defines the contact structure with private attributes (`name`, `number`, `next`) and public methods for managing contacts.
- **Linked List**: Contacts are stored as nodes in a singly linked list, with `firstContact` as the head pointer.
- **Main Function**: Provides a menu-driven interface to interact with the contact management functions.
```
