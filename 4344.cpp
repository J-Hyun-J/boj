#include<stdio.h>


int main(){
	    int n,m;
	        scanf("%d",&n);
		    for(int i=0;i<n;i++){
			            scanf("%d",&m);
				            int arr[m],sum=0;
					            for(int j=0;j<m;j++){
							                scanf("%d", &arr[j]);
									            sum+=arr[j];
										            }
						            float avg;
							            avg=(float)sum/(float)m;
								            int c=0;
									            for(int j=0;j<m;j++){
											                if(avg<arr[j])
														                c++;
													        }
										            float result;
											            result=((float)c/(float)m)*100;
												            printf("%.3f%%\n",result);
													        }
		        return 0;
}
