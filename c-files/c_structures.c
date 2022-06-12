#include<stdio.h>

//creating strucrure called mystructre
struct myStructure {
  int myNum;
  char myLetter;
};
int main(){
  //creating a structure vaiable of myStrucrure called s1
  struct myStructure s1;
  //assigning values to members of s1 using (.)
  s1.myNum = 14;
  s1.myLetter = 'O';

  //printing the values
  printf("My number:  %d\n",s1.myNum);
  printf("My letter: %c\n",s1.myLetter);
  return 0;
}
