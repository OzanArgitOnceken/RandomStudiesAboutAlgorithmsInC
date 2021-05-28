#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 
#define sc scanf
#define pr printf
void menu();
void read_news(char buffer[500], char fileName[10], int);
void append_file(char* file_path, char c);
void read_magic_numbers(char buffer_magic[10], char buffer_news[500]);
double g_func(double f(int x), int a);
double f_func(int a);

int main()
{
	/*
	hocam bilgisayarým dual boot u da virtual machine yi de kaldýrmýyor okul 
	zamanýnda lab bilgisayarlarýndan test etme þansým oluyordu karantina dolayýsýyla
	yeni bilgisayar alamýyorum ve labý da kullanamýyorum 
	Linux ile bi sýkýntý çýkarsa lütfen windows ta deneyebilir 
	misiniz lütfen?
	*/
	menu();
}
void menu()
{
	char t1[500],t2[500],t3[500],t4[500];
	char con='y';
	setlocale(LC_ALL, "Turkish"); 
	while(con=='y')
	{
		read_news(&t1[0],"news/1.txt",0);
		read_news(&t2[0],"news/2.txt",0);
		read_news(&t3[0],"news/3.txt",0);
		read_news(&t4[0],"news/4.txt",0);
		pr("\nTodays lists are listed for you:\n");
		pr("Title of 1:	");
		int i=0;
		while(t1[i]!='\n')
		{
			pr("%c",t1[i]);
			i++;
		}
		pr("\n");
		pr("Title of 2:	");
		i=0;
		while(t2[i]!='\n')
		{
			pr("%c",t2[i]);
			i++;
		}
		pr("\n");
		pr("Title of 3:	");
		i=0;
		while(t3[i]!='\n')
		{
			pr("%c",t3[i]);
			i++;
		}
		pr("\n");	
		pr("Title of 4:	");
		i=0;
		while(t4[i]!='\n')
		{
			pr("%c",t4[i]);
			i++;
		}
		pr("\n");
		pr("What do you want to do?\na.Read a new\n");
		pr("b.List the readed news\nc.Get decrypted information from the news\n");
		char cho;
		sc(" %c",&cho);
		if(cho=='a')
		{
			int whi,choi;
			pr("Which news do you want to read?\n");
			sc("%d",&whi);
			i=0;
			if(whi==1)
			{
				char xx;
				int is_readed=0,readcont;
				FILE*readit=fopen("readed_news_id.txt","r");
				while(!feof(readit))
				{
					fscanf(readit,"%c",&xx);
					if(xx=='1')
						is_readed++;
				}
				if(is_readed>0)
				{
					pr("You read this new.Do you want to continue?");
					pr("\nYes(1)	No(0)\n");
					sc("%d",&readcont);
				}
				else
				{
				append_file("readed_news_id.txt",'1');
				
				read_news(&t1[0],"news/1.txt",1);
				while(t1[i]!='\0')
				{
					pr("%c",t1[i]);
					i++;
				}
				pr("\n");
				}
				if(readcont==1)
				{
					
					
					read_news(&t1[0],"news/1.txt",1);
					while(t1[i]!='\0')
					{
						pr("%c",t1[i]);
						i++;
					}
					pr("\n");
					
					
				}
			}
			else if(whi==2)
			{
				char xx;
				int is_readed=0,readcont;
				FILE*readit=fopen("readed_news_id.txt","r");
				while(!feof(readit))
				{
					fscanf(readit,"%c",&xx);
					if(xx=='2')
						is_readed++;
				}
				if(is_readed>0)
				{
					pr("You read this new.Do you want to continue?");
					pr("\nYes(1)	No(0)\n");
					sc("%d",&readcont);
				}
				else
				{
				append_file("readed_news_id.txt",'2');
				
				read_news(&t2[0],"news/2.txt",1);
				while(t2[i]!='\0')
				{
					pr("%c",t2[i]);
					i++;
				}
				pr("\n");
				}
				if(readcont==1)
				{
					
					
					read_news(&t2[0],"news/2.txt",1);
					while(t2[i]!='\0')
					{
						pr("%c",t2[i]);
						i++;
					}
					pr("\n");
					
					
				}
			}
			
			
			else if(whi==3)
			{
				char xx;
				int is_readed=0,readcont;
				FILE*readit=fopen("readed_news_id.txt","r");
				while(!feof(readit))
				{
					fscanf(readit,"%c",&xx);
					if(xx=='3')
						is_readed++;
				}
				if(is_readed>0)
				{
					pr("You read this new.Do you want to continue?");
					pr("\nYes(1)	No(0)\n");
					sc("%d",&readcont);
				}
				else
				{
				append_file("readed_news_id.txt",'3');
				
				read_news(&t3[0],"news/3.txt",1);
				while(t3[i]!='\0')
				{
					pr("%c",t3[i]);
					i++;
				}
				pr("\n");
				}
				if(readcont==1)
				{
					
					
					read_news(&t3[0],"news/3.txt",1);
					while(t3[i]!='\0')
					{
						pr("%c",t3[i]);
						i++;
					}
					pr("\n");
					
					
				}
			}
			else if(whi==4)
			{
				char xx;
				int is_readed=0,readcont;
				FILE*readit=fopen("readed_news_id.txt","r");
				while(!feof(readit))
				{
					fscanf(readit,"%c",&xx);
					if(xx=='4')
						is_readed++;
				}
				if(is_readed>0)
				{
					pr("You read this new.Do you want to continue?");
					pr("\nYes(1)	No(0)\n");
					sc("%d",&readcont);
				}
				else
				{
				append_file("readed_news_id.txt",'4');
				
				read_news(&t4[0],"news/4.txt",1);
				while(t4[i]!='\0')
				{
					pr("%c",t4[i]);
					i++;
				}
				pr("\n");
				}
				if(readcont==1)
				{
					
					
					read_news(&t4[0],"news/4.txt",1);
					while(t4[i]!='\0')
					{
						pr("%c",t4[i]);
						i++;
					}
					pr("\n");
					
					
				}
			}
		pr("Do you want to continue?Yes(y)/No(n)\n");
		sc(" %c",&con);
	
		
		}	
		else if(cho=='b')
		{
			append_file("readed_news_id.txt", 'b');
			pr("Do you want to continue?Yes(y)/No(n)\n");
			sc(" %c",&con);
		}
		else if(cho=='c')
		{
			char holded[10];
			pr("Which news do you would like to decrypt?");
			int decnew;
			sc("%d",&decnew);
			if(decnew==1)
			{
				read_news(t1,"news/1.txt",1);//for read the rest
				read_magic_numbers(holded,t1);
				int i=0;
				while(t1[i]!='\0')
				{
					pr("%c",t1[i]);
					i++;
				}
				pr("\n");
				int le=0;
				double sum=0;//lenght of array
				while(holded[le]!='\0')
				{
					int num=holded[le]-'0';
					sum+=g_func(f_func,num);
					le++;
				}
				pr("\nNumber of tests performed:%.2lf\n",sum);
				//pr("\n\n%d\n",le);//for test the lenght
				
			}
			else if(decnew==2)
			{
				read_news(t2,"news/2.txt",1);//for read the rest
				read_magic_numbers(holded,t2);
				int i=0;
				while(t2[i]!='\0')
				{
					pr("%c",t2[i]);
					i++;
				}
				int le=0;
				double sum=0;//lenght of array
				while(holded[le]!='\0')
				{
					int num=holded[le]-'0';
					sum+=g_func(f_func,num);
					le++;
				}
				pr("\nNumber of sick people%.2lf\n",sum);
				//pr("\n\n%d\n",le);//for test the lenght
				
			}
			else if(decnew==3)
			{
				read_news(t3,"news/3.txt",1);//for read the rest
				read_magic_numbers(holded,t3);
				int le=0;
				int i=0;
				
				while(t3[i]!='\0')
				{
					pr("%c",t3[i]);
					i++;
				}
				double sum=0;//lenght of array
				while(holded[le]!='\0')
				{
					int num=holded[le]-'0';
					sum+=g_func(f_func,num);
					le++;
				}
				pr("\nNumber of deaths%.2lf\n",sum);
				//pr("\n\n%d\n",le);//for test the lenght
				
			}
			else if(decnew==4)
			{
				read_news(t4,"news/4.txt",1);//for read the rest
				read_magic_numbers(holded,t4);
				int le=0;
				int i=0;
				
				while(t4[i]!='\0')
				{
					pr("%c",t4[i]);
					i++;
				}
				double sum=0;//lenght of array
				while(holded[le]!='\0')
				{
					int num=holded[le]-'0';
					sum+=g_func(f_func,num);
					le++;
				}
				pr("\nExpected number of sick people%.2lf\n",sum);
				//pr("\n\n%d\n",le);//for test the lenght
				
			}
		pr("Do you want to continue?Yes(y)/No(n)\n");
		sc(" %c",&con);
		}
	}
		
	} 



void read_news(char buffer[500], char fileName[10], int flag)
{
	FILE*news=fopen(fileName,"r");
	int i=0;
	char a='s';
	if(flag==0)
	{
		while(a!='\n')
		{
			fscanf(news,"%c",&a);
			buffer[i]=a;
			i++;
		}
	}
	else
	{
		while(a!='\n')
		{
			fscanf(news,"%c",&a);
		}
		while(!feof(news))
		{
			fscanf(news,"%c",&a);
			buffer[i]=a;
			i++;
		}
	}
}
void append_file(char* fileName, char ch)
{
	char hold='a';
	if(ch=='b')
	{
		FILE*readed=fopen(fileName,"r");
		while(fscanf(readed,"%c",&hold)!=EOF)
		{
			int flag1=0,flag2=0,flag3=0,flag4=0;
		//	fscanf(readed,"%c",&hold);
			if(hold=='1')
				flag1++;
			else if(hold=='2')
				flag2++;
			else if(hold=='3')
				flag3++;
			else if(hold=='4')
				flag4++;
			if(flag1)
				pr("1. new was readed\n");
			if(flag2)
				pr("2. new was readed\n");
			if(flag3)
				pr("3. new was readed\n");
			if(flag4)
				pr("4. new was readed\n");
		}
		fclose(readed);
	}
	else
	{
		int fla=0,choi;
		FILE*readit=fopen(fileName,"r");
		if(ch=='1')
		{
			while(!feof(readit))
			{
				fscanf(readit,"%c",&hold);
				if(hold=='1')
					fla++;
			}
			if(fla==0)
			{
				FILE*write=fopen(fileName,"a");
				fprintf(write,"1");
				fclose(write);
			}
			else
			{
				pr("This new was readed do you want to read it again?\n");
				pr("Yes(1)/No(0)\n");
				sc("%d",&choi);
			}
		}
		else if(ch=='2')
		{
			while(!feof(readit))
			{
				fscanf(readit,"%c",&hold);
				if(hold=='2')
					fla++;
			}
			if(fla==0)
			{
				FILE*write=fopen(fileName,"a");
				fprintf(write,"2");
				fclose(write);
			}
			else
			{
				pr("This new was readed do you want to read it again?\n");
				pr("Yes(1)/No(0)\n");
				sc("%d",&choi);
			}
		}
		else if(ch=='3')
		{
			while(!feof(readit))
			{
				fscanf(readit,"%c",&hold);
				if(hold=='3')
					fla++;
			}
			if(fla==0)
			{
				FILE*write=fopen(fileName,"a");
				fprintf(write,"3");
				fclose(write);
			}
		}
		else if(ch=='4')
		{
			while(!feof(readit))
			{
				fscanf(readit,"%c",&hold);
				if(hold=='4')
					fla++;
			}
			if(fla==0)
			{
				FILE*write=fopen(fileName,"a");
				fprintf(write,"4");
				fclose(write);
			}
			else
			{
				pr("This new was readed do you want to read it again?\n");
				pr("Yes(1)/No(0)\n");
				sc("%d",&choi);
			}
		fclose(readit);
		}
	}
}
void read_magic_numbers(char buffer_magic[10], char buffer_news[500])
{
	int i=0,j=0;
	while(buffer_news[i]!='0')
	{
		if(buffer_news[i]=='#')
		{
			i++;
			buffer_magic[j]=buffer_news[i];
			j++;
		}
		i++;
	}
	buffer_magic[j]='\0';//its for know where the finish is
}

double g_func(double f(int x), int a)
{
	return f(a)*f(a);
}
double f_func(int a)
{
	return a*a*a-a*a+2;
}
