#include<stdio.h>
#include<string.h>
int exchange(char a[])//����ת����//
{
	 if(strcmp("��",a)==0)return 0;
	 if(strcmp("һ",a)==0)return 1;
	 if(strcmp("��",a)==0)return 2;
	 if(strcmp("��",a)==0)return 3;
	 if(strcmp("��",a)==0)return 4;
	 if(strcmp("��",a)==0)return 5;
	 if(strcmp("��",a)==0)return 6;
	 if(strcmp("��",a)==0)return 7;
	 if(strcmp("��",a)==0)return 8;
	 if(strcmp("��",a)==0)return 9;
	 if(strcmp("ʮ",a)==0)return 10;
}
void disp(char *p)
{
	int l=strlen(p);
	if(p[0]='"')
	{
		for(int i=1;i<l-1;i+=2)
			printf("%c%c",p[i],p[i+1]);
	}
}
int main()
{
	char str[11][3]={"��","һ","��","��","��","��","��","��","��","��","ʮ"};
    char var[100],var1[100],name[100],name1[100],name2[100],op[100],num[100];
	char a1[100],a2[100],a3[100],a4[100],a5[100],a6[100],a7[100],a8[100],a9[100];
	scanf("%s %s %s %s",var,name,op,num);
    int sum1,sum2,sum3,a,b;
	sum1=exchange(num);
	while((scanf("%s",var1))!=EOF)
	{	
		if(strcmp(var1,var)==0)
		{
			scanf("%s %s %s ",name1,op,num);
			if(strcmp(name1,name)==0)
				sum1=exchange(num);
			else
				sum2=exchange(num);
		}
		else if(strcmp(var1,name)==0)
		{
			scanf("%s %s",op,num);
			if(strcmp(op,"����")==0)
			{
                a=exchange(num);
                sum1+=a; 
            }
            else if(strcmp(op,"����")==0)
            {
                a=exchange(num);
                sum1-=a;
            } 
		}
		else if(strcmp(var1,name1)==0)
		{
			scanf("%s %s",op,num);
			if(strcmp(op,"����")==0)
			{
                a=exchange(num);
                sum2+=a; 
            }
            else if(strcmp(op,"����")==0)
            {
                a=exchange(num);
                sum2-=a;
            } 
		}
		else if(strcmp(var1,"����")==0)
		{
			scanf("%s",name2);
			if(strcmp(name2,name)==0)
				printf("%s\n",str[sum1]);
			else if(strcmp(name2,name1)==0)
				printf("%s\n",str[sum2]);
			else
				printf("���ݲ�����");
		}	
		else if(strcmp(var1,"���")==0)
		{
			scanf("%s %s %s %s %s %s %s %s %s",a1,a2,a3,a4,a5,a6,a7,a8,a9);
			if(strcmp(a5,"����")!=0)
			{
				if(strcmp(a1,name)==0)
				{
					sum3=exchange(a3);
					b=exchange(a7);
					if(strcmp(a2,"����")==0)
					{
						if(sum1>sum3)
						{
							if(strcmp(a5,name)==0)
							{
								if(strcmp(a6,"����")==0)
									sum1+=b;
								else if(strcmp(a6,"����")==0)
									sum1-=b;
							}
							if(strcmp(a5,name1)==0)
							{
								if(strcmp(a6,"����")==0)
									sum2+=b;
								else if(strcmp(a6,"����")==0)
									sum2-=b;
							}
						}
					}
					else if(strcmp(a2,"С��")==0)
					{
						if(sum1<sum3)
						{
							if(strcmp(a5,name)==0)
							{
								if(strcmp(a6,"����")==0)
									sum1+=b;
								else if(strcmp(a6,"����")==0)
									sum1-=b;
							}
							if(strcmp(a5,name1)==0)
							{
								if(strcmp(a6,"����")==0)
									sum2+=b;
								else if(strcmp(a6,"����")==0)
									sum2-=b;
							}
						}
					}
				}
				if(strcmp(a1,name1)==0)
				{
					sum3=exchange(a3);
					b=exchange(a7);
					if(strcmp(a2,"����")==0)
					{
						if(sum1>sum3)
						{
							if(strcmp(a5,name)==0)
							{
								if(strcmp(a6,"����")==0)
									sum1+=b;
								else if(strcmp(a6,"����")==0)
									sum1-=b;
							}
							if(strcmp(a5,name1)==0)
							{
								if(strcmp(a6,"����")==0)
									sum2+=b;
								else if(strcmp(a6,"����")==0)
									sum2-=b;
							}
						}
					}
					else if(strcmp(a2,"С��")==0)
					{
						if(sum1<sum3)
						{
							if(strcmp(a5,name)==0)
							{
								if(strcmp(a6,"����")==0)
									sum1+=b;
								else if(strcmp(a6,"����")==0)
									sum1-=b;
							}
							if(strcmp(a5,name1)==0)
							{
								if(strcmp(a6,"����")==0)
									sum2+=b;
								else if(strcmp(a6,"����")==0)
									sum2-=b;
							}
						}
					}
				}
			}
			else if(strcmp(a5,"����")==0)
			{
				sum3=exchange(a3);
				if(strcmp(a1,name)==0)
				{
					if(strcmp(a2,"����")==0)
					{
						if(sum1>sum3)
							disp(a6);
						else 
							disp(a9);
					}
					if(strcmp(a2,"С��")==0)
					{
						if(sum1<sum3)
							disp(a6);
						else 
							disp(a9);
					}
				}
				if(strcmp(a1,name1)==0)
				{
					if(strcmp(a2,"����")==0)
					{
						if(sum2>sum3)
							disp(a6);
						else 
							disp(a9);
					}
					if(strcmp(a2,"С��")==0)
					{
						if(sum2<sum3)
							disp(a6);
						else 
							disp(a9);
					}
					
				}
			}
		}
	}
}