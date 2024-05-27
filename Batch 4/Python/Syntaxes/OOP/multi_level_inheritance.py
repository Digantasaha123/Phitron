class Vehicle:
    def __init__(self,name,price) ->None:
        self.name = name
        self.price = price
    def move(self):
        pass
#Vehicle class in inherating properties from Vehicle class
class Bus(Vehicle):
    def __init__(self, name,price,seat) ->None:
        self.seat = seat
        super().__init__(self, name, price)
        
class Truck(Vehicle):
    def __init__(self, name, price, load) ->None:
        self.load = load
        super().__init__(self, name,price)
        
        

