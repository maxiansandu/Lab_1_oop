





class Book():
    def __init__(self, title, author, isbn):
        self.title=title
        self.author=author
        self.isbn=isbn



class Library():

    def __init__(self):
        self.books = []



    def add_in_lib(self):
      
        title = input("title: ")
        author = input("author: ") 
        isbn = input("isbn: ")

        new_book=Book(title,author,isbn)

        self.books.append(new_book)   


    def dysp_books(self):

        for i, book in enumerate(self.books):
           

            print(f"{i+1}, title {book.title},  author {book.author},  isbn {book.isbn}")
        
    def remove_book(self,index):

     deleted = self.books.pop(index)

     print(f" book '{deleted.title}' deleted")


       
     
        
    



library=Library()



while True:
    print("MENU\n1) Add a book\n2) dysplay books\n delete a book")
    change = input("----------\n ")

    if change == "1":
        library.add_in_lib()
    elif change == "2":
        library.dysp_books()
    elif change == "3":
        print("give the index of the book to remove")
        index = int(input())
        library.remove_book(index)

    else:
        print("invalid option")

        


