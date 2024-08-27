from abc import ABC
from orders import Order

class User(ABC):

    def __init__(self,name,phone, email, address):

        self.name = name

        self.phone = phone

        self.email = email

        self.address = address
        
        

class Customer(User):

    def __init__(self,name,phone, email,address):

        super().__init__(name,phone, email, address)

        self.cart = Order()
        
        

    def view_menu(self, resturant):

        resturant.menu.show_menu()
    
          

    def add_to_cart(self, resturant, item_name, quantity):
        

            item = resturant.menu.find_item(item_name)

            if item:
                if quantity > item.quantity:
                    print(f"\nOnly {item.quantity} {item_name}'s  available\n")
                else :
                    item.quantity = quantity
                    self.cart.add_item(item)
                    print(f"\n{item_name} * {quantity} Added to cart Succesfully")
            else :

                print("\nItem Not Found\n")
            


    def view_cart(self):

        print("-"*8 + " View Cart " + "-"*8)

        print("Name\tPrice\t Quantity")

        for item, quantity in self.cart.items.items():

            print(f"{item.name}\t{item.price}\t{quantity}")

        print(f"\nTotal Price : {self.cart.total_price}")
        
        
class Employee(User):

    def __init__(self, name, phone, email, address, age, designation, salary):

        super().__init__(name, phone, email, address)

        self.age = age

        self.designation = designation

        self.salary = salary 
        

class Admin(User):

    def __init__(self,name,phone, email,address):

        super().__init__(name,phone, email, address)
       
    

    def add_employee(self, resturant, employee):

        resturant.add_employee(employee)
        

    def view_employee(self, resturant):

        resturant.view_employee()
        

    def add_new_item(self, resturant, item):
        resturant.menu.add_menu_item(item)
        

    def delete_item(self,resturant,item):

        resturant.menu.remove_item(item)     
        
    def view_menu(self, resturant):
        resturant.menu.show_menu()

# admin = Admin("Diganta Saha", "01866328129","Sahadiganta81@gmail.com", "Savar, Dhaka")

# admin.add_employee()  







# admin = Admin("Diganta Saha",'01866328129','sahadiganta82@gmail.com', 'Savar, Dhaka')

# admin.add_employee('nafi','016595629292','nafian@diu.edu.bd','Genda', 25, "junior dev", 12000)

# admin.add_employee('mosta','01222222222','mosta@diu.edu.bd','Gazipur', 26, "Senior dev", 25000)

# admin.add_employee('nafi','016595629292','chayon@diu.edu.bd',nior Dev", 12000)'Genda', 25, "Ju

# admin.view_employee()

# resturant1 = Resturant("mamar_resturant")

# mn = Menu()

# item1 = Fooditem("pizza",12.45, 20)

# item2 = Fooditem("Burger",10, 30 )

# admin1 = Admin("Diganta", "01866328129", "sahadigu@digu.com", "Savar,Dhaka")

# admin1.add_new_item(resturant1,item1)

# admin1.add_new_item(resturant1,item2)

# # mn.show_menu()

 


   

# customer_1 = Customer("Mosta", "00000000", "mosta@mosta.com", "Gazipur")
# customer_1.view_menu(resturant1)

# item_name = input("Enter Item name : ")
# item_quantity = int(input("Enter item Quantity : "))

# customer_1.add_to_cart(resturant1,item_name, item_quantity)
# customer_1.view_cart()



