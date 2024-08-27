class SingleTon:
    __instance = None
    def __init__(self):
        if SingleTon.__instance is None:
            SingleTon.__instance = self
        else :
            raise Exception("SingleTon already has an instance, No more exceptions can be created")
            
    @staticmethod
    def get_instance():
        if SingleTon.__instance is None:
            SingleTon()
        return SingleTon.__instance
    
a = SingleTon.get_instance()
b = SingleTon.get_instance()
        
    
print(f"1--> {a}")
print(f"2--> {b}")

SingleTon()