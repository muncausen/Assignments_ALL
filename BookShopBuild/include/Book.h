using namespace std;
class Book
{
public:
    string author;
    string title;
    string publisher;
    float price;
    int stock;

    Book() {}
    Book(string author, string title, string publisher, float price, int stock)
    {
        this->author = author;
        this->title = title;
        this->publisher = publisher;
        this->price = price;
        this->stock = stock;
    }
};