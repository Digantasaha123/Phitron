class Product:
     def __init__(self):
         self.self = self
class Shop:
    pass
    
x = Product()
print(x.self)