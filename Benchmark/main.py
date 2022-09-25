import datetime

a=datetime.datetime.now().timestamp()

for i in range (0,5000):
    print(i)

b=datetime.datetime.now().timestamp()

print(b-a)