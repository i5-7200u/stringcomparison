#include <stdio.h>
#include <string.h>
int chararraycomparison(char birchar[], char ikichar[])
     {
int a = 0;
int b = 1;
int char1len = strlen(birchar);
int char2len = strlen(ikichar);
if (char1len != char2len)
 {
return 0;
 }
else
 {
while(b>0){
if(a != char1len){
if (birchar[a] == ikichar[a]){

}
else{
b == 0;
return 0;
}
a++;
}
else{
if (birchar[char1len - 1] == ikichar[char1len - 1]){
return 1;
}
}
}
 }
     }
