A=input('Enter amount ')
if (A>5000):
    dis=A*0.15
    print('You have got 15 percent discounte',dis)
else:
    dis=A*0.10
    print('You got no discount',dis)
netamount=A-dis
print('this is your net amount',netamount)