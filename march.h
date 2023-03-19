//The function getMaleList() will return back to main, 
//a new list containing a new array with only people with the gender "M."

typedef struct{
	int age;
	char firstname[50];
	char lastname[50];
	char gender[1]; // M or F
}info;

typedef struct{
	info pList[10];
	int count;
}person;


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
		scanf("%c", list->pList[i].gender);
	}
}


person* getMaleList(person list){
	int i;
	person *maleList = (person*)malloc(sizeof(person)*list.count);

	for(i = 0; i < list.count; i++){
		if(list.pList[i].gender == "M"){
			maleList[i] = list[i];
		}
	}
	
	return maleList;
}

void print(person list, person maleList){
	int i;
	printf("=========LIST OF MALES=========\n");
	for(i = 0; i < list.count; i++){
		printf("===MALE [%d]===\n", i + 1);
		printf("First name: %s\n", maleList.pList[i].firstname);
		printf("Last name: %s\n", maleList.pList[i].lastname);
		printf("Age: %d", maleList.pList[i].age);
		printf("Gender: %c", maleList.pList[i].gender);
	}	
}
