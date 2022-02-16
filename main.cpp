#include <iostream>
#include <string.h>
#include <string>
#include <fstream>

using namespace std;

ifstream input;
ofstream output;

void add_data();
void search_data();
void delete_data();

int main()
{
    int option;
    cout << "1. Add Data" << endl;
    cout << "2. Search Data" << endl;
    cout << "3. Exit" << endl
         << endl;

    cout << "Enter the option:";
    cin >> option;
    cout << endl;
    system("cls");
    if (option == 1)
    {
        add_data();
    }
    else if (option == 2)
    {
        search_data();
    }
    
    else
    {
        exit(0);
    }
    system("cls");
    system("pause>0");
    main();
    return 0;
}

void add_data()
{
    string temp;

    output.open("student.txt", ios::app);

    cout << "Enter student's sr.no:";
    cin >> temp;
    output << temp << "\t";
    cout << "Enter student's name:";
    cin >> temp;
    output << temp << " \t";
    cout << "Enter student's rol.no:";
    cin >> temp;
    output << temp << "\t";
    cout << "Enter student's contact no.:";
    cin >> temp;
    output << temp << "\n";

    output.close();
}

void search_data()
{
    string temp;
    string key;
    cout << "Enter sr.no: ";
    cin >> key;

    input.open("student.txt", ios::app);
    while(input >> temp)
    {
        if (temp == key)
        {
            cout<<"sr.no:"<<temp<<endl;
            input  >> temp;
            
            cout<<"Name:"<<temp<<endl;
            input  >> temp;

            cout<<"Rol.no:"<<temp<<endl;
            input  >> temp;

            cout<<"contact.no:"<<temp<<endl;
            input  >> temp;

            system("pause>0");

        }
        
    }
    input.close();
}
void delete_data()
{
}