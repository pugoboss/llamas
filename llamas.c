#include <stdio.h>

int start_pop = get_int('Lammas number: ');
int end_pop = get_int('Neccessary lammas number: ');
int current_pop = start_pop;
int years = 0;

while (current_pop < 200){
	int gain = (int) current_pop / 4 - current_pop / 3;
	current_pop += gain;
	years++;

	if(current_pop < 0){
		printf('Extermination')
		break;
	}
}

string yearsPlural = "years"
if(years < 2){
	yearsPlural = "year"
}

printf("You'll get neccessary lammas in %i %s", years, yearsPlural)