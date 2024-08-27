class User:
    def __init__(self, name, age, money) -> None :
        self._name = name 
        self._age = age 
        self.__money = money
    #normally get set method
    def age(self):
        return self._age
    #getter without setter is a read only attribute

    #getter
    @property
    def salary(self):
        return self.__money
    
    #setter method
    @salary.setter
    def salary(self, value):
        if value<0:
            return 'salary can\'t be negative'
        self.__money += value
        
samsu = User('kopa', 25, 25000)
print(samsu.age())
print(samsu.salary)
samsu.salary = 1500
print(samsu.salary)
