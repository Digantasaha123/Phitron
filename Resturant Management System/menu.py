class Menu:

    def __init__(self):

        self.items = [] #Database for Menu items
    

    def add_menu_item(self,item):
        self.items.append(item)
        

    def find_item(self, item_name):

        for item in self.items:

            if item.name.lower() == item_name.lower():
                return item

        return None


    def remove_item(self, item_name):    

        item = self.items.find_item(item_name)

        if item:

            self.items.remove(item)

            print("Item deleted Successfully")
            

    def show_menu(self):

        print("****************  Menu  ****************")

        print("Name\tPrice\tQuantity")

        for item in self.items:

            print(f"{item.name}\t{item.price}\t{item.quantity}")