#include <stdio.h>

int main()
{	
	int m,n,u,d=0,l,r=0,i,j,ro,co;
	printf("array size\n");
	scanf("%d%d",&m,&n);
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("\t%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("input row and column\n");
	scanf("%d%d",&ro,&co);
	
	for(j=co,i=ro;j<n;j++){
		if(a[ro][co]==a[ro][co+1]){
			r=a[ro][co+1];
			j=n;
		}
	}	
	for(j=co,i=ro;j>=0;j--){
		if(a[ro][co]==a[ro][co-1]){
			l=a[ro][co-1];
			j=(-1);
		}
	}
	for(i=ro,j=co;i<n;i++){
		if(a[ro][co]==a[ro+1][co]){
			d=a[ro+1][co];
			i=n;
		}
	}
	
	for(i=ro,j=co;i>=0;i--){
		if(a[ro][co]==a[ro-1][co]){
			u=a[ro-1][co];
			i=(-1);
		}
	}
				
	if((u-ro)==(ro-d)==(r-co)==(co-l) && r!=0 && d!=0){
		printf("Nearest Larger Number(NLN): %d\n",u);
		printf("Nearest Larger Number(NLN): %d\n",d);
		printf("Nearest Larger Number(NLN): %d\n",r);		
		printf("Nearest Larger Number(NLN): %d\n",l);
		printf("NLN's room number: a[%d][%d] \n",a[ro-1][co]);
		printf("NLN's room number: a[%d][%d] \n",a[ro+1][co]);
		printf("NLN's room number: a[%d][%d] \n",a[ro][co+1]);
		printf("NLN's room number: a[%d][%d] \n",a[ro][co-1]);
		printf("Direction: up\n");
		printf("Direction: down\n");
		printf("Direction: Right\n");
		printf("Direction: Left\n");
	}
	else if((u-ro)==(r-co)==(co-l) && r!=0 ){
		printf("Nearest Larger Number(NLN): %d\n",u);
		
		printf("Nearest Larger Number(NLN): %d\n",r);		
		printf("Nearest Larger Number(NLN): %d\n",l);
		printf("NLN's room number: a[%d][%d] \n",a[ro-1][co]);
		
		printf("NLN's room number: a[%d][%d] \n",a[ro][co+1]);
		printf("NLN's room number: a[%d][%d] \n",a[ro][co-1]);
		printf("Direction: up\n");
		
		printf("Direction: Right\n");
		printf("Direction: Left\n");
	}
	else if((ro-d)==(r-co)==(co-l) && r!=0 && d!=0){
		
		printf("Nearest Larger Number(NLN): %d\n",d);
		printf("Nearest Larger Number(NLN): %d\n",r);		
		printf("Nearest Larger Number(NLN): %d\n",l);
		
		printf("NLN's room number: a[%d][%d] \n",a[ro+1][co]);
		printf("NLN's room number: a[%d][%d] \n",a[ro][co+1]);
		printf("NLN's room number: a[%d][%d] \n",a[ro][co-1]);
		
		printf("Direction: down\n");
		printf("Direction: Right\n");
		printf("Direction: Left\n");
	}
	else if((u-ro)==(ro-d)==(r-co) && r!=0 && d!=0){
		printf("Nearest Larger Number(NLN): %d\n",u);
		printf("Nearest Larger Number(NLN): %d\n",d);
		printf("Nearest Larger Number(NLN): %d\n",r);		
		
		printf("NLN's room number: a[%d][%d] \n",a[ro-1][co]);
		printf("NLN's room number: a[%d][%d] \n",a[ro+1][co]);
		printf("NLN's room number: a[%d][%d] \n",a[ro][co+1]);
		
		printf("Direction: up\n");
		printf("Direction: down\n");
		printf("Direction: Right\n");
		
	}
	if((u-ro)==(ro-d)==(co-l)  && d!=0){
		printf("Nearest Larger Number(NLN): %d\n",u);
		printf("Nearest Larger Number(NLN): %d\n",d);
				
		printf("Nearest Larger Number(NLN): %d\n",l);
		printf("NLN's room number: a[%d][%d] \n",a[ro-1][co]);
		printf("NLN's room number: a[%d][%d] \n",a[ro+1][co]);
		
		printf("NLN's room number: a[%d][%d] \n",a[ro][co-1]);
		printf("Direction: up\n");
		printf("Direction: down\n");
		
		printf("Direction: Left\n");
	}
	
	return 0;
}		
