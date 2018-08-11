A=input('Enter the product name ')
B=input('Enter the price of the product ')
C=input('Enter the quantity of the product ')
Total=B*C
if (C>=10):
    dis=(Total)*0.05
    print('you have got as moch discounte',dis)
elif (C>=15):
    dis=(Total)*0.10
    print('You have got discounte',dis)
elif (C>=20):
    dis=(Total)*0.15
    print('you have got discounte',dis)
elif (C>=25):
    dis=(Total)*0.20
    print('You have got discounte',dis)
elif (C>=30):
    dis=(Total)*0.25
    print('you have got discounte',dis)
netamout=Total-dis
print('This is your Total amount : ')