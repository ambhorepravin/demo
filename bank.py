import jason
import random
import string
from pathlib import path


class Bank:
    def createaccount(self):
        pass




user = Bank()
print("press 1 for creating an Account")
print("press 2 for Deposit money ")
print("press 3 for Withdraw Maoney")
print("press 4 for Details ")
print("press 5 for updating Details")
print("press 6 for Deleting Account ")

check=int(input("Tell your Response :-"))

if check==1:
    user.createaccount()
  