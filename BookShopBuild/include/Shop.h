using namespace std;
const int SIZE = 50;
class Shop
{
public:
    Book books[SIZE];
    int lastEntry = 0;

    void entry(const Book newbook)
    {

        books[lastEntry] = newbook;
        lastEntry++;
        
    }

    void edit(Book *book_to_edit)
    {
        string author, title, publisher;
        int stock;
        float price;
        cin.ignore();
        cout << "\nEnter a new author name: ";
        getline(cin, author);
        cout << "\nEnter a new title: ";
        getline(cin, title);
        cout << "\nEnter a new publisher: ";
        getline(cin, publisher);
        cout << "\nEnter a new price: ";
        cin >> price;
        cout << "\nEnter a new amount: ";
        cin >> stock;

        book_to_edit->author = author;
        book_to_edit->title = title;
        book_to_edit->publisher = publisher;
        book_to_edit->price = price;
        book_to_edit->stock = stock;


        cout << "\nBook details have been changed successfully!";
    }

    Book *search(const string author, const string title)
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (books[i].author.compare(author) == 0 && books[i].title.compare(title) == 0)
                {
                    cout << "Book found succesfully!" << endl;
                    return &books[i];
                }
            
        }
        return NULL;
    }

    void buy(Book *book_to_buy, int amount)
    {
        char choice;
        if (amount <= book_to_buy->stock)
        {
            cout << "\nYou can buy " << amount << " books at a price of: $" << amount * book_to_buy->price << "\nWould you like to buy it? (Y/N): ";
            cin >> choice;
            if (choice == 'Y'|| choice == 'y')
            {
                book_to_buy->stock = book_to_buy->stock - amount;
                cout << "\nBooks Bought Succesfully!";
            }
            else
            {
                cout << "\nYou Didn't Buy Any Books!";
            }
        }
        else
        {
            cout << "\nWe have only " << book_to_buy->stock << ".\nWould you like to buy it at a price of: $" << book_to_buy->stock * book_to_buy->price << "? (Y/N): ";
            cin >> choice;
            if (choice == 'Y'|| choice == 'y')
            {
                book_to_buy->stock = 0;
                cout << "\nBooks Bought Succesfully!";
            }
            else
            {
                cout << "\nYou Didn't Buy Any Books!";
            }
        }
    }
};