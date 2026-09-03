regObjects = []

class friend:
    def __init__(self,ID):
        self.totalTime = 0;
        self.ID = ID
        self.mRecieved = False
    
    def timeAdd(self,aParam,idParam):
        if self.ID == idParam and aParam == 'R':
            self.mRecieved = False
        elif self.ID == idParam and aParam == 'E':
            self.mRecieved = True
            self.totalTime +=1
        elif aParam == 'T' and self.mRecieved == False:
            self.totalTime += int(idParam)-1
        elif self.mRecieved == False:
            self.totalTime += 1

    def printTotal(self):
        print(f"{self.ID} {self.totalTime-1 if self.mRecieved == True and self.totalTime > 1 else -1}")

    def debugPrint(self):
        print(f'''
            id: {self.ID}
            totalTime: {self.totalTime}
            Recieved: {self.mRecieved}''')

loop = int(input())
for _ in range(loop):
    act, obj = map(str,input().split(" "))
    act = act.upper()
    # letter = obj
    #print(f"act: {act} {letter}")
    if obj not in [l.ID for l in regObjects] and act != 'T' and act == 'R':
        obj = friend(obj)
        regObjects.append(obj)
    for x in regObjects:
        x.timeAdd(act,obj)
        #x.debugPrint()

regObjects.sort(key=lambda x: x.ID)
for x in regObjects:
    x.printTotal()
