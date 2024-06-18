class Animal:
    def __init__(self,name):
        self.name = name
    
    def make_sound(self):
        print(f' {self.name} is making some noise ::::->>')

class Cat(Animal):
    def __init__(self, name):
        super().__init__(name)
        
    # def make_sound(self):
    #     super().make_sound()
    
    def make_sound(self):
        print(f' {self.name} is saying Meow Meow')
        
class Dog(Animal):
    def __init__(self, name):
        super().__init__(name)
        
    def make_sound(self):
        print(f' {self.name} is saying Gheu Gheu')
        
class Goat(Animal):
    def __init__(self, name):
        self.name = name
    def make_sound(self):
        print(f' {self.name} is saying Mehh Mehh') 
        
class Alien(Animal):
    def __init__(self, name):
        self.name = name
        
cat = Cat("persian")
dog = Dog("labrador")
goat = Goat("khashi")
alien = Alien("Unknown Object")

lst = [cat, dog, goat, alien]

for i in lst:
    i.make_sound()
    