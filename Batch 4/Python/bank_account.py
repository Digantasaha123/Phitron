class BankAccount:
    def __init__(self, account_number, account_holder, balance):
        self.account_number = account_number
        self.account_holder = account_holder
        self.balance = balance

    def display_details(self):
       
        print(f"Account Number: {self.account_number}")
        print(f"Account Holder: {self.account_holder}")
        print(f"Balance: ${self.balance:.2f}")
class Bank:
    def __init__(self):
        self.accounts = []

    def add_account(self, account):
       
        self.accounts.append(account)
        print(f"Added account {account.account_number} for {account.account_holder}")

    def remove_account(self, account_number):
       
        for account in self.accounts:
            if account.account_number == account_number:
                self.accounts.remove(account)
                print(f"Removed account {account_number}")
                return
        print(f"Account {account_number} not found")

    def display_all_accounts(self):
       
        if not self.accounts:
            print("No accounts to display")
        else:
            for account in self.accounts:
                account.display_details()
                print("-" * 30)
                
                