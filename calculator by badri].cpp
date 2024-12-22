#include<stdio.h>
#include<math.h>

int main(){
	int choice;
	double num1,num2,a,b,c,result,discriminant,root1,root2;
	
	while(1){
		printf("scientific calculator\n");
		printf("1.Basic operation\n");
		printf("2.Trigonamatric operation\n");
		printf("3.lograthmic operation\n");
		printf("4.exponential operation\n");
		printf("5.Algebric function\n");
		printf("6.exit\n");
		printf("enter the choice:");
		scanf("%d",&choice);
		
switch(choice){
	case 1:
			printf("basic operation\n");
			printf("1.Addition\n");
			printf("2.Subtraction\n");
			printf("3.multiplication\n");
			printf("4.Division\n");
			printf("enter your choice:");
			scanf("%d",&choice);
			
			printf("enter the 1st no:");
			scanf("%lf",&num1);
			
				printf("enter the 2nd no:");
			scanf("%lf",&num2);
			
			
switch (choice){
			case 1:
				result=num1+num2;
				printf("%.2lf + %.2lf=%.2lf\n",num1,num2,result);
				break;
			case 2:
				result=num1-num2;
				printf("%.2lf-%.2lf=%.2lf\n",num1,num2,result);
				break;
			case 3:
				result=num1*num2;
				printf("%.2lf*%.2lf=%.2lf\n",num1,num2,result);
				break;
			case 4:
				if(num2!=0){
				result=num1/num2;
				printf("%.2lf/%.2lf=%.2lf\n",num1,num2,result);
			}
			
				
	        	break;
				default:
				printf("invalid choice\n");
				}
				break;
				switch(choice){
				}
case 2:
				printf("Trignometry operation\n");
				printf("1.sine\n");
				printf("2.cosine\n");
				printf("3.tangent\n");
				printf("4.cotent\n");
				printf("5.secent\n");
				printf("6.cosecent\n");
				printf("enter the choice:");
				scanf("%d",&choice);
				printf("angle in degree:");
				scanf("%lf",&num1);
	switch(choice){
		            case 1:
                        result = sin(num1 * 3.14159 / 180);
                        printf("sin(%.2lf) = %.2lf\n", num1, result);
                        break;
                    case 2:
                        result = cos(num1*  3.14159 / 180);
                        printf("cos(%.2lf) = %.2lf\n", num1, result);
                        break;
                    case 3:
                        result = tan(num1 * 3.14159 / 180);
                        printf("tan(%.2lf) = %.2lf\n", num1, result);
                        break;
                    case 4:
                        result =1/tan(num1 * 3.14159 / 180);
                        printf("cot(%.2lf) = %.2lf\n", num1, result);
                        break;
                    case 5:
                        result =1/cos(num1 * 3.14159 / 180);
                        printf("sec(%.2lf) = %.2lf\n", num1, result);
                        break;
                    case 6:
                        result =1/sin(num1 * 3.14159 / 180);
                        printf("cosec(%.2lf) = %.2lf\n", num1, result);
                        break;
                    default:
                        printf("Invalid choice!\n");
						}
						break;
                   case 3:
                        	printf("lograthmic operation\n ");
                        	printf("1.base-10 operation\n");
                        		printf("2.base-2 operation\n");
                        		printf("enter the choice:");
                        		scanf("%d",&choice);
                        		printf("enter the no:");
								scanf("%lf",&num1);
		switch(choice){
									case 1:
										if(num1>0){
											result=log10(num1);
										printf("log10(%.2lf)= %.2lf\n",num1,result);}
										break;
										default:
											printf("invalid choice\n");

										}
										break;
										case 4:
										
											printf("exponential operation\n");
												printf("1.exponential\n");
													printf("2.natural exponential\n");
													printf("enter the choice:");
													scanf("%d",&choice);
													printf("enter the no:");
													scanf("%lf",&num1);
													switch(choice){
														case 1:
															result=exp(num1);
															printf("exp(%.2lf)=%.2lf\n",num1,result);
															break;
															case 2:
																if(num1>0);{
																result=log(num1);
																printf("ln(%.2lf)=%.2lf\n",num1,result);}
													break;
													default:
													printf("invalid choice\n");
													break;
													
					}
					case 5:
						printf("Algebric operation\n");
						printf("1.x^2 function\n");
						printf("enter the choice:");
						scanf("%d",&choice);
						printf("enter the no of x^2:");
						scanf("%lf",&a);
						printf("enter the no of x:");
						scanf("%lf",&b);
						printf("enter the no :");
						scanf("%lf",&c);
				switch(choice){
					case 1:
						 discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
    }// condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf\n;", root1);
    }

    // if roots are not real
    else {
        int realPart = -b / (2 * a);
        int imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi\n", realPart, imagPart, realPart, imagPart);
    }
						
						
						}
						break;		
				
							
				
					
				}
			
		}
	}
	
