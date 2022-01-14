class Bank(object):
    def __init__(self, fname = '', lname = '', maiden = '', balance = '', num = ''):
        self.first_name = fname
        self.surname = lname
        self.mother_maiden = maiden
        self.account_balance = balance
        self.account_number = num

    def update(self, length = '', width = ''):
