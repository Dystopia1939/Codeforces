tmp=input()
FirstPower=int(tmp.split(" ")[0])
CurrentPower=FirstPower
Levels=int(tmp.split(" ")[1])
AllLevels=[]
for i in range(Levels):
    tmp=input()
    a = []
    a.append(int(tmp.split(" ")[0]))
    a.append(int(tmp.split(" ")[1]))
    AllLevels.append(a)
SortedAllLevls=sorted(AllLevels,key=lambda x:x[0])
Output=""
for i in range(Levels):
    if(SortedAllLevls[i][0]<CurrentPower):
        CurrentPower+=SortedAllLevls[i][1]
    else:
        Output="NO"
if(Output=="NO"):
    print(Output)
else:
    print("YES")