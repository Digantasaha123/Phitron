#Ena poribohon

class Company :
    def __init__(self,name, address) -> None:
        self.name = name
        self.bus = []
        self.routes = []
        self.drivers = []
        self.counter = []
        self.manager = []
        self.superviser = []
        self.fare  = [] 
        
        
class Driver:
    def __init__(self, name, license,age) -> str:
        self.license = license
        self.age = age
        self.name = name
        
class Counter:
    def __init__(self) ->None:
        pass
    def purchase_a_ticket(self, start,destination):
        pass

class Passenger:
    pass

class Supervisor :
    pass

red_mia = Driver("lal Mia", "221-15-4898", 23)
print(red_mia.name, red_mia.license, red_mia.age)
