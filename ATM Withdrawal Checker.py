balance=5000
print("your Balance is:", balance)
print("enter amount in multiple of 100's form:")
amount=int(input("enter your Withdrawl amount:"))
check=amount%100
if(amount<0):
    print("enter correct withdrawl amount")
elif(amount<=balance and check==0):
    print("Accepted")
else:
    print("insufficient Balance or not multiple of 100")
