
class Book:
    def __init__(self, book_str):
        parts = book_str.strip().split(';')
        self.id = int(parts[0])
        self.name = parts[1]
        self.author = parts[2]
        self.available = parts[3] == 'Available'

    def __lt__(self, other):
        return self.author < other.author

    def __eq__(self, other):
        return self.id == other.id

    def __repr__(self):
        available_status = "Available" if self.available else "Not Available"
        return f"{self.id};{self.name};{self.author};{available_status}"

    def set_id(self, new_id):
        self.id = new_id

class Library:
    def __init__(self, path_to_file):
        self.path = path_to_file
        self.books = self.load_books()

    def load_books(self):
        with open(self.path, 'r') as file:
            lines = file.readlines()
            books = [Book(line) for line in lines]
            books.sort()
            return books

    def add_book(self, book):
        existing_books = [b for b in self.books if b.id == book.id]
        if existing_books:
            existing_book = existing_books[0]
            existing_book.available = book.available  
        else:
            self.books.append(book)
            self.books.sort()

    def get_unique_id(self):
        if not self.books:
            return 1
        return max(book.id for book in self.books) + 1

    def show_available_books(self):
        for book in self.books:
            if book.available:
                print(book)

    def __repr__(self):
        return '\n'.join(map(str, self.books))

    def find_book_and_borrow_it(self, name):
        matching_books = [book for book in self.books if name.lower() in book.name.lower()]
        
        if not matching_books:
            print("Kniha nenalezena.")
        elif len(matching_books) > 1:
            print("Nalezeno více knih:")
            for book in matching_books:
                print(book)
        else:
            book = matching_books[0]
            print("Nalezena kniha:")
            print(book)
            borrow = input("Chcete si ji půjčit? (ano/ne): ")
            if borrow.lower() == 'ano':
                book.available = False
                print("Kniha půjčena.")

def main():
    # Testy
    book = Book("9;Animal Farm;Orwell George;Available")
    print(book)
    print()

    library = Library("data.txt")
    print(library)
    print()

    library.add_book(book)
    print()

    book.set_id(library.get_unique_id())
    library.add_book(book)
    print()

    print("Dostupné knihy:")
    library.show_available_books()
    print()

    print("Půjčení knihy:")
    library.find_book_and_borrow_it("Kill")
    print()

    library.find_book_and_borrow_it("a")
    print()

    library.find_book_and_borrow_it("Great")
    print()

    print("Dostupné knihy:")
    library.show_available_books()
    print()

if __name__ == "__main__":
    main()

