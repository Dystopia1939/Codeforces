testCase = int(input())
while(testCase>0):
    numbers = input().split(" ")
    if(int(numbers[0])+int(numbers[1])==int(numbers[2]) or int(numbers[0])+int(numbers[2])==int(numbers[1]) or int(numbers[2])+int(numbers[1])==int(numbers[0])):
        print("yes")
    else:
        print("no")
    testCase-=1