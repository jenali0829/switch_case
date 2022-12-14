#include<stdio.h>
main(){
	
	char a;
	printf("INFO ABOUT INPUT:");
	printf("J=january\n F=february\n M=march\n A=april\n m=may\n j=june\n u=july\n a=august\n S=september\n O=october\n N=november\n D=december\n\n");
	
	printf("ENTER THE INPUT:");
	scanf("%c",&a);
	
	switch(a){
		
		default:
			printf("Invalid input");
			break;
			
			case 'J':
			printf("january");
			break;
			
			case 'F':
				printf("february");
				break;
				
				case 'M':
					printf("march");
					break;
					
					case 'A':
						printf("april");
						break;
						
						case 'm':
							printf("may");
							break;
							
							case 'j':
								printf("june");
								break;
								
								case 'u':
									printf("july");
									break;
										
										case 'a':
											printf("august");
											break;
											
											case 'S':
												printf("septembr");
												break;
												
												case 'O':
													printf("october");
													break;
													
													case 'N':
														printf("november");
														break;
														
														case 'D':
															printf("december");
															break;
													
											
								
			
			
	
	}
	

}
