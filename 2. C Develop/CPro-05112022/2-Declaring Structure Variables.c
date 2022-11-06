//1) Declaring Structure variables separately
struct Student
{
    char name[25];
    int age;
    char branch[10];
    //F for female and M for male
    char gender;
};
struct Student S1, S2;      //declaring variables of struct Student
struct Student S3;

//2) Declaring Structure variables with structure definition
struct Student
{
    char name[25];
    int age;
    char branch[10];
    //F for female and M for male
    char gender;
}S1, S2;
//Ở đây S1 và S2 là các biến của cấu trúc Student. 
//Tuy nhiên cách làm này không được khuyến khích nhiều.