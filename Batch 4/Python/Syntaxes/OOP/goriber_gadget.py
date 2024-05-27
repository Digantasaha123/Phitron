class Laptop:
    def __init__(self, brand, price, color, memory) ->None:
        self.brand = brand
        self.price = price
        self.color = color
        self.memory = memory
    def run(self):
        return f'Running laptop {self.brand}'
    
    def  coding(self):
        return f'Learning and practicing'

class Phone:
    def __init__(self, brand,price, color, dual_sim) ->None:
        self.brand = brand
        self.color = color
        self.price = price
        self.dual_sim = dual_sim
        
    def run(self) ->str:
        return 'aro chala phone bolod'
    
    def phone_call(self, number):
        return f'Calling {number}'
    
class Camera():
    def __init__(self,brand, price, color, pixel) ->None:
        self.brand = brand
        self.price = price
        self.color = color
        self.pixel = pixel
    def run(self):
        pass
    def change_lens(self):
        pass
    