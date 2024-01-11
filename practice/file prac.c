#include<stdio.h>
#include<stdlib.h>

struct personal{
	int id;char name[20];
}p[2]={{1,"asad"},{2,"shuja"}
};

struct dept{
	int id,salary;
}d[2]={{1,50000},{2,100000}
};


void add (int id)
{
	struct personal p;
	struct dept d;
		
	FILE *fp1 = fopen("dept.txt","r");
	FILE *fp2 = fopen("pers.txt","r");
	FILE *fp3 = fopen("combine.txt","a");
	
	while(!feof(fp2))
	{
		fread(&p,sizeof(p),1,fp2);
		if(id==p.id)
		{
			while(!feof(fp1))
			{
				fread(&d,sizeof(d),1,fp1);
				if(id==d.id)
				{
					fprintf(fp3,"%d %s %d\n",p.id,p.name,d.salary);
					fclose(fp1);fclose(fp3);break;
				}
			}fclose(fp2);break;
		}	
	}	
	
	
}

int main(){

	int id;
	int ch=1;
	struct personal p;

	
	FILE *dpt = fopen("dept.txt","a");
	fwrite(d,sizeof(d),1, dpt);
	fclose(dpt);
	
	FILE *fp = fopen("pers.txt","a");
	fwrite(p,sizeof(p),1, fp);
	fclose(fp);
	
	printf("Enter record id: ");
	scanf("%d",&id);
	add(id);
	
	while (ch!=0)
	{
		printf("combine again?(0/1): ");
		scanf("%d",&ch);	
		if(ch==1)
		{
			printf("enter id: ");
			scanf("%d",&id);
			add(id);
		}
	}
	
			
}








