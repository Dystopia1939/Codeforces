testCase = int(input())
while(testCase>0):
    numbers = input().split(" ")
    if(int(numbers[0])<=int(numbers[2])):
        print("+")
    else:
        print("-")
    testCase-=1