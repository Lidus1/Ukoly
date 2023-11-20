
// program fungující jako jednoduchý systém pro evidenci knih v knihovně

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <list>
#include <algorithm>

using namespace std;



class Book
{
    private:
    long id;
    std::string name;
    std::string author;

    // dostupnost knihy

    bool available;



    public:
    Book(std::string book) // vytvoří knihu ze stringu o struktuře "ID;Název;Autor;Dostupnost"
    {
        std::stringstream ss(book);
        std::string item;
        std::vector<std::string> splittedStrings;
        while (std::getline(ss, item, ';')) {
            splittedStrings.push_back(item);
        }
        this->id = std::stoi(splittedStrings[0]);
        this->name = splittedStrings[1];
        this->author = splittedStrings[2];
        this->available = splittedStrings[3] == "Available";
    }

    bool operator < (const Book& obj) const // true pokud je autor knihy abecedně před autorem obj
    {
        return this->author < obj.author;
    }

    bool operator == (const Book& obj) const // true pokud je autor knihy stejný jako autor obj
    {
        return this->author == obj.author;
    }

    bool getAvailable() // vrátí dostupnost knihy
    {
        return this->available;
    }
    
    // vypsání knihy ve formátu "%id;%name;%author;%available"

    friend std::ostream& operator<<(std::ostream& os, const Book& obj)
    {
        os << obj.id << obj.name << ";" << obj.author << ";" << (obj.available ? "Available" : "Borrowed");
        return os;
    }

};

class Library
{
     // předpřipravení třídy Library pro přístup k jejím metodám

    private:

    std::string path; // cesta k souboru s knihami
    std::list<Book> books; // seznam knih vždy seřazený podle autora

    // vrací libovolný kontejner s knihami, které jsou dostupné
    std::list <Book> 
    getAvailableBooks()
    {
        std::list <Book> availableBooks;
        for (Book book : this->books)
        {
            if (book.getAvailable())
            {
                availableBooks.push_back(book);
            }
        }
        return availableBooks;
    }

public:

        
    Library (std::string path_to_file )
    {
        this->path = path_to_file;
        std::ifstream file(path_to_file);
        std::string line;
        while (std::getline(file, line))
        {
            Book book(line);
            this->books.push_back(book);
        }
        this->books.sort();
    }

    void addBook (Book book) // přidá knihu do knihovny za předpokladu že v systému již neexistuje kniha se stejným id
    {
        for (Book bookInLibrary : this->books)
        {
            if (bookInLibrary == book)
            {
                std::cout << "Kniha s tímto autorem již existuje" << std::endl;
                return;
            }
        }
        this->books.push_back(book);
        std::cout << "Kniha byla přidána" << std::endl;
    }

    friend ostream& operator<<(ostream& os, const Library& obj) // vypíše všechny knihy v knihovně
    {
        for (Book book : obj.books)
        {
            os << book << std::endl;
        }
        return os;
    }
};



    


    

    




   





int main()
{
    Book book("9;Animal Farm;Orwell George;Available"); 
    std::cout<<book<<std::endl<<std::endl; 

    Library library("data.txt"); 
    std::cout<<library<<std::endl<<std::endl; 

    library.addBook(book);
    std::cout<<std::endl; 
    /*

    book.setID(library.getUniqueId()); 

    library.addBook(book); 

    std::cout<<std::endl; 

    

    std::cout<<"Dostupné knihy:"<<std::endl; 

    library.showAvailableBooks(); 

    std::cout<<std::endl; 

    

    std::cout<<"Pujceni knihy:"<<std::endl; 

    library.findBookAndBorrowIt("Kill"); 

    std::cout<<std::endl; 

    library.findBookAndBorrowIt("a"); 

    std::cout<<std::endl; 

    library.findBookAndBorrowIt("Great"); 

    std::cout<<std::endl; 

    

    std::cout<<"Dostupné knihy:"<<std::endl; 

    library.showAvailableBooks(); 

    std::cout<<std::endl; 

    */ 

 return 0; 
}
