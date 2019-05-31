// basic homework 19 (3A713257)
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	printf("Please enter coordinates for the top left and bottom right corners of rectangle.(Up to ten groups)\n");
	printf("(r 0.0 0.0 0.0 0.0)(enter * to finish)\n");
    char s[5];
    int i=0;
    double rect[11][4];
    int k[11];
    while(1)
    { 
        scanf("%s",s);
        if(s[0]=='*') break; 
        else if(s[0]=='r') 
        {
    		scanf("%lf %lf %lf %lf",&rect[i][0],&rect[i][1],&rect[i][2],&rect[i][3]); 
			k[i]=1;
		} 
        i++;
        if(i==11) break;
    }
    int a, m=1;
    double x,y;
    printf("\nPlease enter the coordinates of the test.");
	printf("\n(0.0 0.0)(enter (9999.9 9999.9) to finish)");
    while(1){
      	printf("\nPoint %d:",m);  
        scanf("%lf %lf",&x,&y);
        if(x==9999.9&&y==9999.9) break;
        int flag=0;
    	for(a=0;a<i;a++){
            if(k[a]==1&&x>rect[a][0]&&x<rect[a][2]&&y<rect[a][1]&&y>rect[a][3]){
				printf("Point %d is contained in figure %d\n",m,a+1);
				flag=1;
			}   
        }
        if(flag==0)
		printf("Point %d is not contained in any figure\n",m);  
        m++;
    }
    system ("pause");
    return 0;
}
