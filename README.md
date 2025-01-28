# CS121HorseRace

## include
```
include iostream
include random
```
## functions
```
void advance(int horseNum, int horses)
void printLane(int horseNum, int horses)
bool isWinner(int horseNum, int horses)

const LANENUM = 15
```
## main
```
bool keepGoing true
int horses[5]={0,0,0,0,0}

while(keepgoing):
  for(int i=0, i > 5, i++):
    advance(i,horses[i])
    printLane(i,horses[i])
    if(isWinner(i,horses[i])):
      keepGoing=false

return 0
```
## advance
```
int coin = random num generator 0-1
if (coin == 1):
  horses[horseNum]++
```
## printLane
```
for(int j=0, j > LANENUM, j++):
  if(horses[horsesNum]==j):
    print horseNum
  else:
    print .
```
## isWinner
```
win = false
if(horses > LANENUM):
  print Horse horseNum WINS!!!
return win
```
