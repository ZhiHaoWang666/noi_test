#include<iostream>
using namespace std;

/*define a struct just like this
struct type_name {
    member_type1 member_name1;
    member_type2 member_name2;
    member_type3 member_name3;
} object_names; 
*/
//exaple

struct Books{
    char price[50];
    char time[50];
    char writer[50];
}book;

//how to ask members of the struct
//exaple
int main(){
    Books b_1;
    Books b_2;
    //This is var b_1;
    strcpy(b_1.price, "100");
    strcpy(b_1.time, "2024");
    strcpy(b_1.writer,"xiaoming");
    //This is var b_2;

    strcpy(b_2.price,"100");
    strcpy(b_2.time,"2023");
    strcpy(b_2.writer,"daming");

    cout << b_1.price << " " << b_1.time << " " << b_1.writer << endl;
    cout << b_2.price << " " << b_2.time << " " << b_2.writer << endl; 

    return 0;
}