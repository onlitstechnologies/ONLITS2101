#include<stdio.h>
struct student
{
    int roll_no;
    char name[30];
    char gender[7];
    char contact_no[11];
};

void save();
void read();
struct student s;

int main()
{
    save();
    read();
}

void save()
{
    FILE *fp;
    printf("Enter roll no: ");
    scanf("%d%*c", &s.roll_no);
    printf("Enter name: ");
    scanf("%[^\n]", s.name);
    printf("Enter gender: ");
    scanf("%s", s.gender);
    printf("Enter contact: ");
    scanf("%s", s.contact_no);
    fp = fopen("Student.dat","w");
    fprintf(fp,"%d %s %s %s", s.roll_no, s.name, s.gender, s.contact_no);
    fclose(fp);
    printf("Record inserted successfully!\n");
}

void read()
{
    FILE *fp;
    fp = fopen("Student.dat", "r");
    fscanf(fp, "%d", &s.roll_no);
    fscanf(fp, "%s", s.name);
    fscanf(fp, "%s", s.gender);
    fscanf(fp, "%s", s.contact_no);
    printf("\nData read from file:\n");
    printf("Roll No: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Gender: %s\n", s.gender);
    printf("Contact No: %s", s.contact_no);
    printf("\n");
    fclose(fp);
}
