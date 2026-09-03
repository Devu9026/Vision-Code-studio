unit=int(input("enter your unit"))
if(unit<0):
    print("invalid unit")
elif(unit<=100):
    bill=unit*5
    print("your total bill is:",bill)
elif(unit<=200):
    bill=unit*7
    print("your Total bill is:",bill)
else:
    bill=unit*10
    print("your total bill is:",bill)
