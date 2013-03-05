#include <stdio.h>

typedef struct {
    char petType[20];
    char petName[20];
}Pet;

typedef struct {
    char name[20];
    char profession[20];
    char gender;
    int age;
    Pet pet;
}Human;

void humanDescribe(Human *human) {
    printf("Name: %s\n", human->name);
    printf("Profession: %s\n", human->profession);
    printf("Sex: %c\n", human->gender);
    printf("Age: %d\n", human->age);
    printf("Pet: %s\n", human->pet.petType);
    printf("Pet name: %s\n\n", human->pet.petName);
}

void sexModifier(Human *human) {
    if ( human->gender == 'm' ) {
        human->gender = 'f';
    } else {
        human->gender = 'm';
    }
}

void stringCopy(char *source, char *destination) {
    for ( ; *source != 0; source++, destination++ ) {
        *destination = *source;
    }
    *destination = 0;
}

Human childrenFactory(char *name, char gender) {
    Human baby;

    stringCopy(name, baby.name);
    stringCopy("None", baby.profession);
    baby.gender = gender;
    baby.age = 0;
    stringCopy("None", baby.pet.petType);
    stringCopy("None", baby.pet.petName);

    return baby;
}

int main() {
    Human harry = {"Harry", "wizard", 'm', 21, {"Hamster", "Bob"}};
    Human baby = childrenFactory("Anonymous", 'i');

    humanDescribe(&harry);
    sexModifier(&harry);
    // harry.gender = 'f';
    stringCopy("Matilda", harry.name);
    stringCopy("Witch", harry.profession);
    harry.age = 18;
    stringCopy("boyfriend", harry.pet.petType);
    stringCopy("heyYou", harry.pet.petName);
    humanDescribe(&harry);
    humanDescribe(&baby);


    return 0;
}
