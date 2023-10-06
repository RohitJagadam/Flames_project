 #include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	
    //printf()
    time_t t1;
	srand((unsigned) time(&t1));
    char mahi[102][10]={"color 00","color 01","color 02","color 03","color 04","color 05","color 06","color 07","color 08","color 09","color 10",
	"color 11","color 12","color 13","color 14","color 15","color 16","color 17","color 18","color 19","color 20",
	"color 21","color 22","color 23","color 24","color 25","color 26","color 27","color 28","color 29","color 30",
	"color 31","color 32","color 33","color 34","color 35","color 36","color 37","color 38","color 39","color 40",
	"color 41","color 42","color 43","color 44","color 45","color 46","color 47","color 48","color 49","color 50",
	"color 51","color 52","color 53","color 54","color 55","color 56","color 57","color 58","color 59","color 60",
	"color 61","color 62","color 63","color 64","color 65","color 66","color 67","color 68","color 69","color 70",
	"color 71","color 72","color 73","color 74","color 75","color 76","color 77","color 78","color 79","color 80",
	"color 81","color 82","color 83","color 84","color 85","color 86","color 87","color 88","color 89","color 90",
	"color 91","color 92","color 93","color 94","color 95","color 96","color 97","color 98","color 99","color 00",
	
	};
	system("color 3e");
	char a[30],b[30],c[30],d[40];
	int i,m=0;
	printf("\n\n\n\n\t\t\t\t\t  %c   WELCOME TO FLAMES GAME!   %c\n",178,178);
	printf("\t\t\t\t    _________________________________________");
	printf("\n\n\n\n\n\t\t\t");
	printf("Enter Your Name\t      :\t ");
	char ch=getch();
	i=0;
	while(ch!=13){
		int r=rand()%100;
		r=r+1;
		system(mahi[r]);
		if(ch==8 && i==0){
			
		}
		else if(ch==8 && i==1){
			i--;
			printf("\b \b");
		}else if(ch==8 && i>1){
			printf("\b \b");
			i--;
		}
		else{
			
		     c[i]=ch;
		     i++;
			 printf("%c",c[i-1]);	
		}

		 ch=getch();	
	}
	c[i]='\0';
	for(i=0;c[i]!='\0';i++)
	{
//		printf("%d \n",i);
//		printf("mahes");
		if(c[i]==' ')
		{
			
		}
		else
		{
			a[m]=c[i];
			m++;
		}
	}
//	printf("String without space %s\n",a);
	a[m]='\0';
//    printf("String length of a is %d\n",strlen(a));
	strlwr(a);
//	printf("%s\n",a);
	printf("\n\n\t\t\tEnter Your Crush Name :  ");
	ch=getch();
	i=0;
	while(ch!=13){
		int r=rand()%100;
		system(mahi[r]);
		if(ch==8 && i==0){
			
		}
		else if(ch==8 && i==1){
			i--;
			printf("\b \b");
		}else if(ch==8 && i>1){
			printf("\b \b");
			i--;
		}
		else{
		     d[i]=ch;
		     i++;
			 printf("%c",d[i-1]);	
		}

		 ch=getch();	
	}
	d[i]='\0';
	
//	gets(d);
	m=0;
	for(i=0;d[i]!='\0';i++)
	{
		if(d[i]==' ')
		{
		
		}
		else
		{
			b[m]=d[i];
			m++;
		}
	}
	b[m]='\0';
	//printf("string length of b is %d\n",strlen(b));
	strlwr(b);
//	printf("%s\n",b);
	int f=strlen(b);
	int j,k,e=0;
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;j<f;j++)
		{
			if(a[i]==b[j])
			{
				e++;
				for(m=j;m<f;m++)
				{
					b[m]=b[m+1];
					
				}
				f--;
				b[f]='\0';
				/*for(k=0;b[k]!='\0';k++)
					{
						printf("%c",b[k]);
						
					}*/
				//printf("\n");
				break;
			}
		}
	}
	//printf("Strlength of a is %d\nStrlen of b is %d\n\n",strlen(a),strlen(b));
	if(strlen(a)==0 || strlen(b)==0){
		printf("\n\n\t\t\t\tSome error in Names. Please try again Later.\n\t\t\t\t\t   Erorr:12daod43424");
		exit(0);
	}
	int number=strlen(b)+strlen(a)-e;
//	printf("Number = %d\n",number);
	if(number==0)
	{
		printf("\n\n\t\t  \tPlease enter Valid Names...");
		exit(0);
	}
	//int z;
	//printf("Total Number is = %d\n",number);
	char flames[7]="FLAMES";
	int temp=number;
	int x=number%6;
	if(x==0)
	{
		x=6;
	}
	
	int sum=x-1;
	f=strlen(flames);
	for(i=0;i<5;i++)
	{
		for(j=x-1;j<f;j++)
		{
			flames[j]=flames[j+1];
		}
		f--;
		flames[f]='\0';
		x=sum+temp;
		if(x>f)
		{
			x=x%f;
		}
		sum=0;
		for(m=1;m<=6;m++)
		{
			if(m==x)
			{
				break;
			}
			else if(x==0)
			{
				x=f;
				break;
			}
			else
			{
				sum++;
			}
			
		}
		//printf("%s\n",flames);
		
		
	}
	//printf("\t\t\t\t\t _________\n");
	printf("\n\n\n\t\t\t\t\t      | Submit |\n");
	
	//printf("\t\t\t\t\t _________\n");

	ch=getch();
	system("color 2F");
	printf("\n\n\t\t\t   Please Wait While We Are Progressing Your Results");
	for(i=0;i<6;i++)
	{
		int r=rand()%100;
		system(mahi[r]);
		printf(".");
		sleep(1);
	}
	system("color 60");
	if(ch!='\0')
	{
		
	
	char lett=flames[0];
	switch(lett)
	{
		case 'F':
			printf("\n\n\t\t\t          According to Flames,You Both are \"FRIENDS\"");
			break;
		case 'L':
		    printf("\n\n\t\t\t          According to Flames,You Both are \"LOVERS\"");
		    break;
		case 'A':
			printf("\n\n\t\t\t          According to Flames,You Both Have \"ATTRACTION\"");
			break;
		case 'M':
			printf("\n\n\t\t\t          According to Flames,You Both will \"MARRIAGE\" ");
			break;
		case 'E':
			printf("\n\n\t\t\t          According to Flames,You Both are \"ENEMIES\"");
			break;
		default:
			printf("\n\n\t\t\t          According to Flames,You both are \"SIBLINGS\"");
			
	}
   }
   Sleep(5000);
   printf("\n\n\n\t\tWanna Play Again ? ");
   printf("\n\t\t\t\t\t1)Play Again ");
   printf("\n\t\t\t\t\t2)Quit ");
   printf("\n\t\t\tYour choice : ");
   scanf("%d",&k);
   if(k==1){
   	    system("cls");
   	    main();
   }else{
   	    system("cls");
   	    for(i=0;i<10;i++){
   	    	printf("\n");
		   }
        char m[100]="\n\t\t\t\tThank you for Playing. We will meet in the Future !\n\n";
   	    for(i=0;i<strlen(m);i++){
   	    	int j=rand()%100;
   	    	system(mahi[j]);
   	    	printf("%c",m[i]);
   	    	Sleep(100);

		}
   }
   getchar();   	
	return 0;
}

