class Bank:
    def __init__(self, balance):
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 100000
        
        def get_balance(self):
            return self.balance
        def deposit(self,amount):
            if amount > 0:
                self.balance+=amount
                
    def withdraw(self, amount):
        if amount < min_withdraw:
            return f"fokira, {self.min_withdraw} er kom taka withdraw kora jay na"
        elif  amount>max_withdraw: 
            return f"Bank fokir hoye jabe"
        else :
            self.balance -= amount
            print("Here is your money")
            print("your balance after withdraw = {self.balance}")