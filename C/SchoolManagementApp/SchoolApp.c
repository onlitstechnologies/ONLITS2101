#include <stdio.h>
#include <stdlib.h>

void menu();
void new_admission();
void edit_admission();
void admission_list();

struct admission
{
    int admno;
    char name[30];
    char dob[11];
    char gender;
    char admission_date[11];
};

int main()
{
    menu();
    return 0;
}

void menu()
{
    int ch;
    while (1)
    {
        printf("MAIN MENU\n");
        printf("1. New Admission\n");
        printf("2. Edit Admission\n");
        printf("3. Admission List\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            new_admission();
            break;
        case 2:
            edit_admission();
            break;
        case 3:
            admission_list();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid option!\n\n");
        }
    }
}

void new_admission()
{
    struct admission a;
    FILE *fp;
    printf("Enter admission number: ");
    scanf("%d%*c", &a.admno);
    printf("Enter name: ");
    scanf("%[^\n]", a.name);
    printf("Enter date of birth: ");
    scanf("%s%*c", a.dob);
    printf("Enter gender: ");
    scanf("%c", &a.gender);
    printf("Enter date of admission: ");
    scanf("%s", a.admission_date);
    fp = fopen("Admission.dat", "a");
    fprintf(fp, "%d, %s, %s, %c, %s\n", a.admno, a.name, a.dob, a.gender, a.admission_date);
    fclose(fp);
    printf("\nAdmission successful!\n\n");
}

void edit_admission()
{
    
}

void admission_list()
{
    struct admission a;
    FILE *fp;
    int i;
    fp = fopen("Admission.dat", "r");
    printf("LIST OF ADMISSIONS\n");
    printf("-------------------------------------------------------------------------------\n");
    printf("%-15s%-20s%-15s%-15s%-15s\n", "Admission No", "Name", "Date of Birth", "Gender", "Admission Date");
    printf("-------------------------------------------------------------------------------\n");
    for (i = 1; i <= 4; i++)
    {
        fscanf(fp, "%d, %[^,], %[^,], %c, %[^\n]\n", &a.admno, a.name, a.dob, &a.gender, a.admission_date);
        printf("%-15d%-20s%-15s%-15c%-15s\n", a.admno, a.name, a.dob, a.gender, a.admission_date);
    }
    printf("-------------------------------------------------------------------------------\n");
    printf("\n");
    fclose(fp);
}