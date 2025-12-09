#include <iostream>

// 
/* 35) void exchange(int *p, int *q){

      int pointerNum = *p;
      *p = *q;
      *q = temp;
}

*/

/*36) void switchEnds(int *array, int size){
      
      int pointerNum = *array;
      *array = array[size - 1];
      array[size - 1] = pointerNum;
}

*/


/* 37)
Given the variable initializations


int a[5] = {0, 10, 20, 30, 40};
int k = 3;
int *p = a + 1;
determine the output from each of the following statements:

A) cout ≪ a[k];
30

B) cout ≪ *(a + k);
30

C) cout ≪ *a;
0

D) cout ≪ a[*a];
0

E) cout ≪ a[*a + 2];
20

F) cout ≪ *p;
10

G) cout ≪ p[0];
10

H) cout ≪ p[1];
20

*/