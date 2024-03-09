input()
days = input().split(" ")
count = max = prevNum = 0
for income in days:
    if int(income) >= prevNum:
        count += 1
    else:
        if(count>max):
            max = count
        count = 1
    prevNum = int(income)
if(max == 0 or count>max):
    max = count
print(max)