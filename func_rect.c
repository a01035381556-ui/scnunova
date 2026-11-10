#include <stdio.h>


int rectDrawArea (int w, int h) {
    int s, i, j;
    for(i=0; i<w; i++){
        for(j=0; j<h; j++){
            printf("*");
        }
           printf("\n"); 
    }
    s = w * h;
        
	return s;

}



int main(){
    int ss; 
    ss = rectDrawArea(3, 5);
    printf("%d", ss);
    printf("\n");

    return 0;
}
