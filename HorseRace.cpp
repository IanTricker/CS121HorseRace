#include <iostream>
#include <random>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

const int LANENUM = 15;

int main(){
  bool keepGoing = true;
  int horses[5]={0,0,0,0,0};
  int enter;

  while(keepGoing){

    for(int i=0;i<5;i++){
      advance(i,horses);
      printLane(i,horses);
      if(isWinner(i,horses)){
        keepGoing=false;
      } // end isWinner if
    }// end for loop
    std::cout << "Press enter for another turn";
    std::cin.get();
  }// end keepgoing loop
  return 0;
}// end main


void advance(int horseNum, int* horses){
  std::random_device rd;
  std::uniform_int_distribution<int> dist(0,1);
  int coin = dist(rd);
  if (coin == 1){
    horses[horseNum]++;
  }// end coin if
}// end advannce


void printLane(int horseNum, int* horses){
  int j;
  for(j=0;j<LANENUM;j++){
    if(horses[horseNum]==j){
      std::cout << horseNum;
    }// end horses if
    else{
      std::cout << ".";
    }// end else
  }// end for loop
  std::cout << std::endl;
}// end printnLane


bool isWinner(int horseNum, int* horses){
  bool win = false;
  if(horses[horseNum]==LANENUM){
    std::cout << "Horse " << horseNum << " WINS!!!" << std::endl;
    win = true;
  }// end if
  return win;
}// end isWinner
