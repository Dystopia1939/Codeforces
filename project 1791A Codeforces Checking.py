testCase = int(input())
while(testCase>0):
    character = input()
    if("codeforces".find(character)!=-1):
        print("yes")
    else:
        print("no")
    testCase-=1