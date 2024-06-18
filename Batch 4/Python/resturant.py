class RestaurantMenu:
    def __init__(self):
        self.menu = {}

    def add_dish(self, dish_name, price):
        self.menu[dish_name] = price

    def remove_dish(self, dish_name):
        
        if dish_name in self.menu:
            del self.menu[dish_name]
        else:
            print(f"{dish_name} not found in the menu")

    def calculate_total_cost(self, order):
        total_cost = 0
        for dish in order:
            if dish in self.menu:
                total_cost += self.menu[dish]
            else:
                print(f"{dish} is not available in the menu")
        return total_cost


menu = RestaurantMenu()
menu.add_dish("Burger", 8.50)
menu.add_dish("Pizza", 12.00)
menu.add_dish("Salad", 7.00)

menu.remove_dish("Salad")

order = ["Burger", "Pizza", "Salad"]
total_cost = menu.calculate_total_cost(order)
print(f"Total cost of the order: ${total_cost:.2f}")
