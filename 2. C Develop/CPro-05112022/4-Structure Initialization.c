//Structure Initialization
struct Patient
{
    float height;
    int weight;  
    int age; 
};
struct Patient p1 = { 180.75 , 73, 23 };    //initialization

//Hoặc
struct Patient p1;
//p1.height = 180.75;     //initialization of each member separately
//p1.weight = 73;
//p1.age = 23;