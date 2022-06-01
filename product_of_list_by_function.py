def product(lst):
    m=1
    for x in lst:
        m=m*x
    return m
x=int(input("Enter size of list :"))
lst=[]
for i in range(0,x,1):
    a=int(input("Enter element :"))
    lst.append(a)
print(product(lst))
