#include<stdio.h>
//STRUCT employee

struct angajat{
	int id;
	char nume[50];
	int salariu;
};

//function to sort by salary
void SortBySalary(struct angajat e[], int n)
{
	int i,j;
	struct angajat temp;
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(e[i].salariu > e[j].salariu)
			{
				temp = e[i];
				e[i] = e[j];
				e[j] = temp;
			}
		}
	}
}

void main(){
	int i,p;
	int n;
	printf("\tSOCIETATEA CC\n");
	printf("\nNumar angajati: ");
	
	struct angajat emp[100];
	scanf("%d",&n);
	for (i=0;i<=n-1;i++)
	{
		printf("\tEnter ID, Name, Salary: ");
		scanf("%d %s %d",&emp[i].id,&emp[i].nume,&emp[i].salariu);
		
	}
	
	for (i=0;i<=n-1;i++){
		printf("\nId angajat: %d Nume angajat: %s   salariu: %d",emp[i].id, emp[i].nume,emp[i].salariu);
	}

	printf("\n");
	
	for (i=0;i<=n-1;i++){
		if (emp[i].salariu < 3000){ //if salary  <3000, increased with 20%
			emp[i].salariu = emp[i].salariu + (0.2 * emp[i].salariu);
			printf("\nId angajat: %d Nume angajat: %s   salariu dupa marire: %d",emp[i].id, emp[i].nume,emp[i].salariu);
			
		};
	
	}
	
	printf("\n");
	

	SortBySalary(emp, n);
	

	for (i=0;i<=n-1;i++)
	{
	printf("\nId: %d Nume: %s   salariu: %d",emp[i].id, emp[i].nume, emp[i].salariu);
	}
	
	printf("\n");
	
	printf("\tEnter ID, Name, Salary: ");
	scanf("%d %s %d",&emp[i].id,&emp[i].nume,&emp[i].salariu);
	printf("\nId angajat nou: %d Nume angajat: %s   salariu: %d",emp[i].id, emp[i].nume,emp[i].salariu);
	n++;
	printf("\n");
	
	SortBySalary(emp, n);
	
	for (i=0;i<=n-1;i++)
	{
	printf("\nId: %d Nume: %s   salariu: %d",emp[i].id, emp[i].nume, emp[i].salariu);
	}
	
	printf("\n");
	
	
	n--;
	printf("\nAngajatul a fost concediat");
	printf("\nId: %d Nume: %s   salariu: %d",emp[n].id, emp[n].nume, emp[n].salariu);
	
	printf("\n");
	
	SortBySalariu(emp, n);
	
	printf("\nLista angajati societate CC:");
	for (i=0;i<=n-1;i++){
		printf("\nId: %d Nume: %s   salariu: %d",emp[i].id, emp[i].nume, emp[i].salariu);
	}
	

}