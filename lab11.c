#include <stdio.h>
#include <string.h>

struct population_census
{
    char surname[50];       //фамилия
    char name[50];          //имя
    char middle_name[50];   //отчество
    char gender[10];        //пол
    char street[50];        //улица
    int house;              //дом
    int flat;               //квартира
    int age;                //возраст
};

void add(struct population_census people[])
{
    struct population_census one = {"Ivanov", "Ivan", "Ivanovich", "man", "Lenina", 5, 2, 63};
    struct population_census two = {"Petrov", "Denis", "Danilovich", "man", "Energtikov", 53, 112, 18};
    struct population_census three = {"Denisov", "Petr", "Ivanovich", "man", "Pobednaya", 13, 69, 25};
    struct population_census four = {"Kucheryavaya", "Margarita", "Igorevna", "woman", "50 let VLKSM", 9, 105, 18};
    struct population_census five = {"Revtsova", "Svetlana", "Timofeevna", "woman", "Stroiteley", 15, 70, 19};

    people[0] = one;
    people[1] = two;
    people[2] = three;
    people[3] = four;
    people[4] = five;
}

void viewing(struct population_census people[], int k)
{
    int i;
    for (i = 0; i < k; i++)
    {
        printf("%d: %s %s %s", i + 1, people[i].surname, people[i].name, people[i].middle_name);
        printf("\n");
        printf("%s ", people[i].gender);
        printf("\n");
        printf("Address: ul. %s, dom %d, kv. %d ", people[i].street, people[i].house, people[i].flat);
        printf("\n");
        printf("%d let ", people[i].age);
        printf("\n\n");
    }
}

int supplementation(struct population_census people[], int k)
{
    int h, f, a;
    printf("Enter surname: ");
    scanf("%s", people[k].surname);
    printf("Enter name: ");
    scanf("%s", people[k].name);
    printf("Enter middle_name: ");
    scanf("%s", people[k].middle_name);
    printf("Enter gender: ");
    scanf("%s", people[k].gender);
    printf("Enter street: ");
    scanf("%s", people[k].street);
    printf("Enter house: ");
    scanf("%d", &h);
    people[k].house = h;
    printf("Enter flat: ");
    scanf("%d", &f);
    people[k].flat = f;
    printf("Enter age: ");
    scanf("%d", &a);
    people[k].age = a;
    printf("\n\n");
    return k + 1;
}

int removal(struct population_census people[], int k)
{
    int del_people, j = 0;
    printf("Enter the number of the person you want to delete: ");
    scanf("%d", &del_people);
    printf("\n");
    j = del_people;
    while (j != k)
    {
        people[j - 1] = people[j];
        j++;
    }
    return k - 1;
}

void search(struct population_census people[], int k)
{
    int i, f = 0;
    printf("People of retirement age:");
    printf("\n");
    for (i = 0; i < k; i++)
    {
        if (people[i].age >= 65)
        {
            printf("%s %s %s", people[i].surname, people[i].name, people[i].middle_name);
            printf("\n");
            printf("%s ", people[i].gender);
            printf("\n");
            printf("Address: ul. %s, dom %d, kv. %d ", people[i].street, people[i].house, people[i].flat);
            printf("\n");
            printf("%d let ", people[i].age);
            printf("\n\n");
            f++;
        }
    }
    if (f == 0)
    {
        printf("There are no people of retirement age :)");
        printf("\n\n");
    }
}

int menu(struct population_census people[])
{
    int i;
    printf("MENU:");
    printf("\n");
    printf("1.Displaying the full list of people");
    printf("\n");
    printf("2.Adding a person to a list");
    printf("\n");
    printf("3.Removing a person from the list");
    printf("\n");
    printf("4.Search for people of retirement age in the list");
    printf("\n");
    printf("5.Shut down your work");
    printf("\n");
    printf("What do you want to do: ");
    scanf("%d", &i);
    printf("\n");
    return i;
}

int main()
{
    int k = 5, i;
    struct population_census people[10];
    add(people);
    for (;;)
    {
        i = menu(people);
        switch (i)
        {
            case 1:
                viewing(people, k);
                break;
            case 2:
                k = supplementation(people, k);
                viewing(people, k);
                break;
            case 3:
                k = removal(people, k);
                viewing(people, k);
                break;
            case 4:
                search(people, k);
                break;
            case 5:
                return 0;
        }
    }
}
