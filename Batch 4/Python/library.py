class Book:
    def __init__(self,cat,id,name,quantity):
        self.id = id
        self.name = name
        self.cat = cat
        self.quantity = quantity
        
class User:
    def __init__(self,name,id,password):
        self.id = id
        self.name = name
        self.password = password
        self.borrowedBooks = []

class library:
    def __init__(self,owner,name):
        self.owner = owner
        self.name = name
        self.books = []
        self.users = []
    def addBooks(self, cat,id,name,quantity):
        book = Book(cat,id,name,quantity)
        self.books.append(book)
        
    def addUser(self,name,id,password):
        user = User(self, name, id, password)
        self.users.append(user)
        
    def borrowedBooks(self, user, id):
    
        for book in self.books:
            if book.id = id:
                if book in user.borrowedBooks:
                print("This book has already been borrowed")++3