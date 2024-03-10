testCase = int(input())
while(testCase>0):
    numbers = list(map(int,input().split(" ")))
    numbers.sort()
    print(numbers[1])
    testCase-=1