testCase = int(input())
while(testCase>0):
    numbers = list(map(int,input().split(" ")))
    if(numbers[0]+numbers[1]>=10 or numbers[2]+numbers[1]>=10 or numbers[2]+numbers[0]>=10):
        print("yes")
    else:
        print("no")
    testCase-=1