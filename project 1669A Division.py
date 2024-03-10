testCase = int(input())
while(testCase>0):
    numbers = int(input())
    if(numbers>=1900):
        print("Division 1")
    elif(numbers>=1600):
        print("Division 2")
    elif(numbers>=1400):
        print("Division 3")
    else:
        print("Division 4")
    testCase-=1