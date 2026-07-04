#include <iostream>
#include <string>
using namespace std;
struct Book
{
    string title;
    string author;
    string isbn;
    bool available;
};
Book books[100];
int totalBooks = 0;
void addBook()
{
    cout << "\nEnter Book Title: ";
    cin.ignore();
    getline(cin, books[totalBooks].title);

    cout << "Enter Author: ";
    getline(cin, books[totalBooks].author);

    cout << "Enter ISBN: ";
    getline(cin, books[totalBooks].isbn);

    books[totalBooks].available = true;
    totalBooks++;

    cout << "\nBook Added Successfully!\n";
}
void searchBook()
{
    int choice;
    string key;
    bool found = false;
    cout << "\nSearch By\n";
    cout << "1. Title\n";
    cout << "2. Author\n";
    cout << "3. ISBN\n";
    cout << "Enter Choice: ";
    cin >> choice;
    cin.ignore();
    cout << "Enter Search Value: ";
    getline(cin, key);
    for(int i=0;i<totalBooks;i++)
    {
        if((choice==1 && books[i].title==key) ||
           (choice==2 && books[i].author==key) ||
           (choice==3 && books[i].isbn==key))
        {
            cout<<"\nBook Found\n";
            cout<<"Title : "<<books[i].title<<endl;
            cout<<"Author: "<<books[i].author<<endl;
            cout<<"ISBN  : "<<books[i].isbn<<endl;

            if(books[i].available)
                cout<<"Status: Available\n";
            else
                cout<<"Status: Checked Out\n";
            found=true;
        }
    }
    if(!found)
        cout<<"\nBook Not Found!\n";
}
void checkoutBook()
{
    string isbn;
    cin.ignore();
    cout<<"\nEnter ISBN: ";
    getline(cin,isbn);
    for(int i=0;i<totalBooks;i++)
    {
        if(books[i].isbn==isbn)
        {
            if(books[i].available)
            {
                books[i].available=false;
                cout<<"\nBook Checked Out Successfully!\n";
            }
            else
            {
                cout<<"\nBook Already Checked Out!\n";
            }
            return;
        }
    }
    cout<<"\nBook Not Found!\n";
}
void returnBook()
{
    string isbn;
    int days;
    cin.ignore();
    cout<<"\nEnter ISBN: ";
    getline(cin,isbn);
    for(int i=0;i<totalBooks;i++)
    {
        if(books[i].isbn==isbn)
        {
            books[i].available=true;

            cout<<"Enter Overdue Days (0 if none): ";
            cin>>days;

            if(days>0)
            {
                int fine = days*10;
                cout<<"Fine = Rs."<<fine<<endl;
            }
            else
            {
                cout<<"No Fine.\n";
            }
            cout<<"Book Returned Successfully!\n";
            return;
        }
    }

    cout<<"\nBook Not Found!\n";
}

void displayBooks()
{
    if(totalBooks==0)
    {
        cout<<"\nNo Books Available.\n";
        return;
    }

    cout<<"\n------ Library Books ------\n";

    for(int i=0;i<totalBooks;i++)
    {
        cout<<"\nBook "<<i+1<<endl;
        cout<<"Title : "<<books[i].title<<endl;
        cout<<"Author: "<<books[i].author<<endl;
        cout<<"ISBN  : "<<books[i].isbn<<endl;

        if(books[i].available)
            cout<<"Status: Available\n";
        else
            cout<<"Status: Checked Out\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout<<"\n========== Library Management System ==========\n";
        cout<<"1. Add Book\n";
        cout<<"2. Search Book\n";
        cout<<"3. Display Books\n";
        cout<<"4. Check Out Book\n";
        cout<<"5. Return Book\n";
        cout<<"6. Exit\n";
        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                searchBook();
                break;

            case 3:
                displayBooks();
                break;

            case 4:
                checkoutBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                cout<<"\nThank You!\n";
                break;

            default:
                cout<<"\nInvalid Choice!\n";
        }

    }while(choice!=6);

    return 0;
}
