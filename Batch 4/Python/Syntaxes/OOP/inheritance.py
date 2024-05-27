class Gadget:
    def __init__(self,brand, price, color) ->None:
        self.brand = brand
        self.price = price
        self.color = color
        
    def run(self):
        pass
        
class Laptop:
    def __init__(self,memory,ssd) ->None:
        self.memory = memory
        self.ssd = ssd

    def  coding(self):
        return f'Learning and practicing'

class Phone(Gadget):
    def __init__(self,brand, price, color,dual_sim) ->None:
        self.dual_sim = dual_sim
        super().__init__(brand, price, color)
    def phone_call(self, number):
        return f'Calling {number}'
    
    def __repr__(self) ->str:
        return f"Phone : {self.dual_sim}"    
class Camera():
    def __init__(self,pixel) ->None:
        
        self.pixel = pixel
        
    def change_lens(self):
        pass
    
myPhone = Phone(True)
print(myPhone)
 
