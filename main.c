#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	int age;
	char firstname[50];
	char lastname[50];
	char gender; // M or F
}info;

typedef struct{
	info pList[10];
	int count;
}person;

void inputPeople(person *list);
person* getMaleList(person list);
void printPeople(person *maleList);

int main(){
	int i;
	person arr;
	person *maleArr;
	
	printf("Input the number of people: ");
	scanf("%d", &arr.count);
	arr.pList[arr.count];
	
	inputPeople((&arr));
	maleArr = getMaleList(arr);
	printPeople(maleArr);
}

void inputPeople(person *list){
	int i;
	for(i = 0; i < list->count; i++){
		printf("=========ENTER PERSON [%d]'s INFO=========\n", i+1);
		printf("First name: ");
		scanf("%s", list->pList[i].firstname);
		printf("Last name: ");
		scanf("%s", list->pList[i].lastname);
		printf("Age: ");
		scanf("%d", &list->pList[i].age);
		printf("Gender: ");
		scanf(" %c", &list->pList[i].gender);
	}
}


person* getMaleList(person list){
	int i;
	person *maleList = (person*)malloc(sizeof(person)*list.count);
	maleList->count = 0;

	for(i = 0; i < list.count; i++){
		if(list.pList[i].gender == 'M'){
			maleList->pList[i] = list.pList[i];
			maleList->count++;
		}
	}
	
	return maleList;
}

void printPeople(person *maleList){
	int i;
	printf("=========LIST OF MALES=========\n");
	for(i = 0; i < maleList->count; i++){
		printf("===MALE [%d]===\n", i + 1);
		printf("First name: %s\n", maleList->pList[i].firstname);
		printf("Last name: %s\n", maleList->pList[i].lastname);
		printf("Age: %d\n", maleList->pList[i].age);
		printf("Gender: %c\n", maleList->pList[i].gender);
	}	
}
