#include <stdio.h>

int prompt(char *string);
int fuwafuwatime(int age);
int zankokunatenshinoteeze(int age);
int bravesong(int age);
int signalgraph(int age);

int main(void){
	int age;
	age=prompt("Введи возраст: ");
	fuwafuwatime(age);
	bravesong(age);
	signalgraph(age);
	return 0;
}

int prompt(char *string){
	int input;
	char fumoffu;
	printf("%s", string);
	
	while (scanf("%d%c", &input, &fumoffu) != 2 || fumoffu != '\n' || input <= 0){ //me gently hates bigor. GDD FTW.
		while (getchar() != '\n');
		puts("Invalid input. Please enter positive precision.");
		printf("%s", string);
	}
	return input;
}

int zankokunatenshinoteeze(int age){//0 - лет, 1 -года, 2 - год
	if (age>=20 || age < 10){
		switch (age%10){
			case 1: return 2; break;
			case 2:
			case 3: return 1; break;
			case 4:
			case 5: 
			case 6:
			case 7:
			case 8:
			case 9:
			case 0: return 0; break;
		}
	}
	else {
		return 0;
	}
	return 0;
}

int fuwafuwatime(int age){
	switch (zankokunatenshinoteeze(age)){
		case 0: printf("Вам уже %d лет\n", age); break;
		case 1: printf("Вам уже %d года\n", age); break;
		case 2: printf("Вам уже %d год\n", age); break;
	}
	return 0;
}

int bravesong(int age){
	if (age > 18){
		switch (zankokunatenshinoteeze(age)){
			case 0: printf("Вы совершеннолетний уже %d лет\n", age-18); break;
			case 1: printf("Вы совершеннолетний уже %d года\n", age-18); break;
			case 2: printf("Вы совершеннолетний уже %d год\n", age-18); break;
		}
	}
	else if (age < 18){
		switch (zankokunatenshinoteeze(age)){
			case 0: printf("До совершеннолетия ещё %d лет\n", 18-age); break;
			case 1: printf("До совершеннолетия ещё %d года\n", 18-age); break;
			case 2: printf("До совершеннолетия ещё %d год\n", 18-age); break;
		}		
	}
	else {
		printf ("Ты совершеннолетний");
	}
	return 0;
}

int signalgraph(int age){
	if (age > 60) {
		switch (zankokunatenshinoteeze(age)){
			case 0: printf("Вы на пенсии уже %d лет\n", age-60); break;
			case 1: printf("Вы на пенсии уже %d года\n", age-60); break;
			case 2: printf("Вы на пенсии уже %d год\n", age-60); break;
		}
	}
	else if (age == 60){
		printf ("Вы пенсионер");
	}
	else {
		switch (zankokunatenshinoteeze(age)){
			case 0: printf("До пенсии ещё %d лет\n", 60-age); break;
			case 1: printf("До пенсии ещё %d года\n", 60-age); break;
			case 2: printf("До пенсии ещё %d год\n", 60-age); break;
		}		
	}
	return 0;
}